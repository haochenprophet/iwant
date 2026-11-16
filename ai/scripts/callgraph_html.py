#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""callgraph_html.py — 生成可交互调用图 HTML（可视化层）
输入: ai/callgraph/{functions.json, edges.json, stats.json, modules/*.json}
输出: ai/callgraph/
    data/summary.js          模块统计 + 枢纽 TOP + 跨模块流（script 标签加载，file:// 可用）
    data/mod_<module>.js     每模块函数/边局部数据
    callgraph.html           交互页面（ECharts，模块级聚合图 + 模块内函数力导向图）
"""
import io
import json
import os
import re

BASE = r'E:\github\iwant\ai\callgraph'
DATA_DIR = os.path.join(BASE, 'data')
MOD_DIR = os.path.join(BASE, 'modules')


def load(p):
    with io.open(p, 'r', encoding='utf-8-sig') as f:
        return json.load(f)


def js(obj):
    return json.dumps(obj, ensure_ascii=False, separators=(',', ':'))


def build_summary():
    stats = load(os.path.join(BASE, 'stats.json'))
    functions = load(os.path.join(BASE, 'functions.json'))
    nodes = functions['nodes']
    mods = []
    for m in sorted(stats['modules']):
        st = stats['modules'][m]
        mods.append({
            'n': m, 'files': st.get('functions', 0) and 0 or 0,
            'funcs': st.get('functions', 0), 'intra': st.get('intra', 0),
            'out': st.get('out', 0), 'in': st.get('in', 0),
            'unresolved': st.get('unresolved', 0), 'external': st.get('external', 0),
            'indirect': st.get('indirect', 0),
        })
    # 枢纽（edges.json 全量计算）
    edges = load(os.path.join(BASE, 'edges.json'))['edges']
    in_cnt = {}
    out_cnt = {}
    for e in edges:
        in_cnt[e['t']] = in_cnt.get(e['t'], 0) + e['n']
        out_cnt[e['s']] = out_cnt.get(e['s'], 0) + e['n']
    callers = {}
    for e in edges:
        callers.setdefault(e['t'], set()).add(e['s'])
    callees = {}
    for e in edges:
        callees.setdefault(e['s'], set()).add(e['t'])

    def hub(keys, cnt):
        lst = []
        for k in keys:
            nd = nodes[k]
            lst.append((k, nd.get('readable', nd['name']), nd.get('class') or '',
                        nd.get('module', ''), nd.get('file') or '', nd.get('line') or 0,
                        cnt.get(k, 0)))
        return lst

    in_sorted = sorted((e for e in in_cnt.items()), key=lambda x: (-x[1], -len(callers.get(x[0], ()))))
    out_sorted = sorted((e for e in out_cnt.items()), key=lambda x: (-x[1], -len(callees.get(x[0], ()))))
    hubs_in = hub([k for k, _ in in_sorted[:40]], in_cnt)
    hubs_out = hub([k for k, _ in out_sorted[:40]], out_cnt)
    cross = [[k.split('->')[0], k.split('->')[1], v]
             for k, v in sorted(stats['cross_module'].items(), key=lambda x: -x[1])]
    summary = {
        'generated': 'callgraph_html.py',
        'totals': {
            'files': stats['raw']['files'], 'lines': stats['raw']['lines'],
            'nodes': stats['nodes']['total'],
            'methods': stats['nodes']['methods'], 'free': stats['nodes']['free'],
            'macro': stats['nodes']['macro'],
            'edges': stats['edges']['total'], 'callsites': stats['edges']['callsites'],
            'unresolved': stats['edges']['unresolved_sites'],
            'external': stats['edges']['external_sites'],
            'indirect': stats['edges']['indirect_sites'],
            'types': stats['edges']['types'],
        },
        'modules': mods,
        'hubs_in': hubs_in,
        'hubs_out': hubs_out,
        'cross': cross,
    }
    with io.open(os.path.join(DATA_DIR, 'summary.js'), 'w', encoding='utf-8') as f:
        f.write('window.CG = %s;\n' % js(summary))
    print('summary.js: modules=%d hubs_in=%d hubs_out=%d cross=%d' % (
        len(mods), len(hubs_in), len(hubs_out), len(cross)))


def build_modules():
    functions = load(os.path.join(BASE, 'functions.json'))
    nodes = functions['nodes']
    edges_all = load(os.path.join(BASE, 'edges.json'))['edges']
    stats = load(os.path.join(BASE, 'stats.json'))
    all_mods = sorted(stats['modules'].keys())
    # 模块 -> 函数列表
    mod_funcs = {}
    for nid, nd in nodes.items():
        mod_funcs.setdefault(nd['module'], []).append(nid)
    for mod in all_mods:
        fn_ids = mod_funcs.get(mod, [])
        # 节点索引
        idx = {nid: i for i, nid in enumerate(fn_ids)}
        fn_data = []
        for nid in fn_ids:
            nd = nodes[nid]
            fn_data.append([nd['name'], nd.get('class') or '', nd.get('file') or '',
                            nd.get('line') or 0, nd.get('kind') or 'method',
                            (nd.get('sigs') or [''])[0][:160]])
        intra = []
        out = []
        inn = []
        for e in edges_all:
            sm, tm = nodes[e['s']]['module'], nodes[e['t']]['module']
            if sm == mod and tm == mod:
                intra.append([idx[e['s']], idx[e['t']], e['type'], e['n'], e.get('how', '')])
            elif sm == mod:
                out.append([idx[e['s']], tm, e['n'], e['type']])
            elif tm == mod:
                inn.append([idx[e['t']], sm, e['n'], e['type']])
        blob = {'f': fn_data, 'e': intra, 'x': out, 'xi': inn}
        with io.open(os.path.join(DATA_DIR, 'mod_%s.js' % mod), 'w', encoding='utf-8') as f:
            f.write('window.CG.mod_%s = %s;\n' % (mod, js(blob)))
    print('mod data files:', len(all_mods))


HTML = u'''<!DOCTYPE html>
<html lang="zh-CN">
<head>
<meta charset="UTF-8">
<title>iwant 全项目函数调用关系图 (callgraph)</title>
<script src="lib/echarts.min.js"></script>
<script src="data/summary.js"></script>
<style>
:root { --bg:#10161f; --panel:#182230; --line:#2a3947; --txt:#d8e0ea; --dim:#8aa0b5; --acc:#4da3ff; }
* { box-sizing:border-box; }
body { margin:0; font:13px/1.6 "Microsoft YaHei",Segoe UI,sans-serif; background:var(--bg); color:var(--txt); }
a { color:var(--acc); }
header { padding:14px 20px; background:linear-gradient(90deg,#0d2438,#10161f); border-bottom:1px solid var(--line); }
header h1 { margin:0 0 4px; font-size:18px; }
header .sub { color:var(--dim); font-size:12px; }
#tabs { display:flex; gap:8px; padding:10px 20px 0; }
.tab { padding:7px 16px; border:1px solid var(--line); border-bottom:none; border-radius:8px 8px 0 0; cursor:pointer; color:var(--dim); background:#111a24; }
.tab.on { color:#fff; background:var(--panel); border-color:var(--acc); }
.panel { display:none; }
.panel.on { display:block; }
.ctrl { display:flex; flex-wrap:wrap; gap:10px; align-items:center; padding:10px 20px; background:var(--panel); border-bottom:1px solid var(--line); }
.ctrl label { color:var(--dim); font-size:12px; }
select, input, button { background:#0f1823; color:var(--txt); border:1px solid var(--line); border-radius:6px; padding:5px 8px; font-size:12px; }
button { cursor:pointer; }
button:hover { border-color:var(--acc); }
#chart { width:100%; height:calc(100vh - 150px); min-height:520px; }
#chart2 { width:100%; height:calc(100vh - 210px); min-height:520px; }
.wrap { padding:0 20px; }
#detail { display:none; margin:10px 20px 20px; padding:12px 16px; background:#0f1a26; border:1px solid var(--line); border-radius:8px; font-size:12px; max-height:300px; overflow:auto; }
#detail b { color:#fff; }
.dim { color:var(--dim); }
ul.hubs { list-style:none; margin:0; padding:0; }
ul.hubs li { padding:4px 8px; border-bottom:1px solid var(--line); display:flex; gap:8px; }
ul.hubs li:nth-child(odd) { background:#0f1a26; }
.hub-n { display:inline-block; width:26px; color:var(--acc); font-weight:bold; }
.hub-name { color:#fff; }
.legend { display:flex; gap:12px; flex-wrap:wrap; padding:8px 20px; font-size:12px; color:var(--dim); }
.legend i { display:inline-block; width:12px; height:3px; margin-right:4px; vertical-align:middle; }
#status { color:var(--dim); font-size:12px; }
#scale { padding:10px 20px; color:var(--dim); font-size:12px; background:#0c141d; border-bottom:1px solid var(--line); }
</style>
</head>
<body>
<header>
  <h1>iwant 全项目函数调用关系图</h1>
  <div class="sub">src/ · 6201 文件 · 101 模块 · <span id="statLine"></span> · 数据层 JSON 见 <a href="edges.json">edges.json</a> / <a href="functions.json">functions.json</a>，可读层见 <a href="report.md">report.md</a></div>
</header>

<div id="tabs">
  <div class="tab on" data-t="m">模块级聚合图</div>
  <div class="tab" data-t="f">模块内函数图</div>
  <div class="tab" data-t="h">枢纽函数 TOP</div>
</div>

<div class="panel on" id="pm">
  <div class="ctrl">
    <label>布局</label>
    <select id="mLayout"><option value="force">力导向</option><option value="circular">环形</option></select>
    <label>最小边权重</label>
    <input type="range" id="mMinW" min="1" max="60" value="3">
    <label>突出枢纽模块</label>
    <button id="mHub">TOP15 高亮</button>
    <button id="mReset">重置视图</button>
    <span id="status"></span>
  </div>
  <div class="legend">
    <span><i style="background:#4da3ff"></i>节点大小=函数数</span>
    <span><i style="background:#7ee2a8"></i>边宽=跨模块调用点数</span>
    <span><i style="background:#ffd479"></i>高亮=枢纽模块</span>
    <span>点击节点 → 进入该模块函数图；拖动/滚轮可缩放</span>
  </div>
  <div id="chart"></div>
  <div id="scale">整图规模说明：全量 11306 个函数节点 / 3426 条去重调用边，直接渲染整图无法阅读。因此默认展示<b>模块级聚合</b>（101 节点，跨模块调用流）；模块内函数图按需加载单个模块的局部视图；可读层报告见 <a href="report.md">report.md</a>，全量数据见 <a href="edges.json">edges.json</a>。</div>
</div>

<div class="panel" id="pf">
  <div class="ctrl">
    <label>模块</label>
    <select id="fMod"></select>
    <label>类</label>
    <select id="fCls"><option value="">全部</option></select>
    <label>搜索</label>
    <input type="text" id="fSearch" placeholder="函数名/类名关键字">
    <label>边类型</label>
    <span id="fTypes"></span>
    <label>最小度数</label>
    <input type="text" id="fMinDeg" value="0" style="width:44px">
    <label>节点上限</label>
    <input type="text" id="fCap" value="600" style="width:52px">
    <button id="fHub">枢纽高亮</button>
    <button id="fReset">重置</button>
    <span id="status2"></span>
  </div>
  <div class="legend">
    <span><i style="background:#4da3ff"></i>类内调用(this)</span>
    <span><i style="background:#ff6b6b"></i>跨类(cross_class)</span>
    <span><i style="background:#7ee2a8"></i>自由函数(free)</span>
    <span><i style="background:#ffd479"></i>宏(macro)</span>
    <span><i style="background:#b57bff"></i>递归</span>
    <span><i style="background:#5a6b7a"></i>外部模块节点(ext:模块)</span>
    <span>节点颜色=所属类，大小=调用度数；点击节点看详情；搜索后仅显示匹配与邻接节点</span>
  </div>
  <div id="chart2"></div>
</div>

<div class="panel" id="ph">
  <div class="wrap">
    <h3 style="margin:14px 0 6px">枢纽函数 TOP 40（被调用最多 · 入度 · 调用点次数）</h3>
    <ul class="hubs" id="hIn"></ul>
    <h3 style="margin:20px 0 6px">枢纽函数 TOP 40（调用最多 · 出度 · 调用点次数）</h3>
    <ul class="hubs" id="hOut"></ul>
    <p class="dim" style="margin-top:14px">可读层完整报告（含每模块表格、跨模块流 TOP、方法论与局限）见 <a href="report.md">report.md</a>；每模块详情见 <a href="modules-md/index.md">modules-md/</a>；数据层见 functions.json / edges.json / unresolved.json。</p>
  </div>
</div>

<div id="detail"></div>

<script>
var CG = window.CG;
document.getElementById('statLine').textContent =
  CG.totals.nodes + ' 函数节点（方法 ' + CG.totals.methods + ' / 自由 ' + CG.totals.free + ' / 宏 ' + CG.totals.macro +
  '）· ' + CG.totals.edges + ' 条去重调用边 · ' + CG.totals.callsites + ' 调用点 · 未解析 ' + CG.totals.unresolved +
  ' · 外部 ' + CG.totals.external + ' · 间接 ' + CG.totals.indirect;

var TYPE_COLOR = {this:'#4da3ff', cross_class:'#ff6b6b', free:'#7ee2a8', macro:'#ffd479', recursive:'#b57bff', indirect:'#ff9d5c'};
var TYPE_LABEL = {this:'类内', cross_class:'跨类', free:'自由', macro:'宏', recursive:'递归', indirect:'间接'};

function tabSwitch(t){
  document.querySelectorAll('.tab').forEach(function(x){ x.classList.toggle('on', x.dataset.t===t); });
  document.querySelectorAll('.panel').forEach(function(x){ x.classList.toggle('on', x.id==='p'+t); });
  if (t==='m') setTimeout(function(){ mChart.resize(); }, 50);
  if (t==='f') setTimeout(function(){ fChart.resize(); }, 50);
}
document.querySelectorAll('.tab').forEach(function(x){ x.addEventListener('click', function(){ tabSwitch(x.dataset.t); }); });

/* ---------------- 模块级聚合图 ---------------- */
var mChart = echarts.init(document.getElementById('chart'));
var mNodes = [], mLinks = [], mModIdx = {};
CG.modules.forEach(function(m, i){
  mModIdx[m.n] = i;
  mNodes.push({ id:'mod_'+m.n, name:m.n, symbolSize: Math.max(14, Math.sqrt(m.funcs||1)*2.2),
                value: m, itemStyle:{color:'#1d3c5c', borderColor:'#4da3ff'} });
});
CG.cross.forEach(function(c){
  var s = mModIdx[c[0]], t = mModIdx[c[1]];
  if (s===undefined || t===undefined) return;
  mLinks.push({ source:'mod_'+c[0], target:'mod_'+c[1], value:c[2], lineStyle:{ width: Math.min(9, 1+Math.sqrt(c[2])) } });
});
var mOpt = {
  backgroundColor:'transparent',
  tooltip: { formatter: function(p){ if (p.dataType==='edge') return p.data.source+' → '+p.data.target+'：'+p.data.value+' 调用点'; return '<b>'+p.data.name+'</b><br>函数数 '+p.data.value.funcs+'<br>模块内边 '+p.data.value.intra+' · 出 '+p.data.value.out+' · 入 '+p.data.value.in+'<br>未解析 '+p.data.value.unresolved+' · 外部 '+p.data.value.external; } },
  series: [{ type:'graph', layout:'force', roam:true, draggable:true, data:mNodes, links:mLinks,
    label:{ show:true, fontSize:11, color:'#cfe3ff' },
    force:{ repulsion: 420, edgeLength: [60,160] },
    lineStyle:{ color:'#4da3ff', opacity:0.5 },
    emphasis:{ focus:'adjacency', lineStyle:{ width:3 } },
    edgeSymbol:['none','arrow'], edgeSymbolSize:6 }]
};
mChart.setOption(mOpt);
mChart.on('click', function(p){ if (p.dataType==='node'){ loadModule(p.data.name); tabSwitch('f'); } });

document.getElementById('mLayout').onchange = function(){
  var v = this.value;
  if (v==='circular'){ mOpt.series[0].layout='circular'; mOpt.series[0].circular={rotateLabel:true}; }
  else { mOpt.series[0].layout='force'; delete mOpt.series[0].circular; }
  mChart.setOption(mOpt, true);
};
document.getElementById('mMinW').oninput = function(){
  var w = parseInt(this.value,10)||3;
  mOpt.series[0].links = mLinks.filter(function(l){ return l.value>=w; });
  mChart.setOption(mOpt, true);
};
document.getElementById('mHub').onclick = function(){
  var top = {};
  CG.hubs_in.slice(0,15).forEach(function(h){ top[h[0]]=1; });
  CG.hubs_out.slice(0,15).forEach(function(h){ top[h[0]]=1; });
  mOpt.series[0].data = mNodes.map(function(n){
    var h = top[n.id] ? 1 : 0;
    n.itemStyle = h ? {color:'#ffd479', borderColor:'#ff9d5c', borderWidth:2, shadowBlur:12, shadowColor:'#ffd479'} : {color:'#1d3c5c', borderColor:'#4da3ff'};
    return n;
  });
  mChart.setOption(mOpt, true);
};
document.getElementById('mReset').onclick = function(){
  mOpt.series[0].data = mNodes.map(function(n){ n.itemStyle={color:'#1d3c5c', borderColor:'#4da3ff'}; return n; });
  mOpt.series[0].links = mLinks;
  mOpt.series[0].layout='force'; delete mOpt.series[0].circular;
  document.getElementById('mMinW').value=3;
  mChart.setOption(mOpt, true);
};

/* ---------------- 模块内函数图 ---------------- */
var fChart = echarts.init(document.getElementById('chart2'));
var fSel = document.getElementById('fMod');
CG.modules.forEach(function(m){ var o=document.createElement('option'); o.value=m.n; o.textContent=m.n; fSel.appendChild(o); });

var curMod = null, curCls = '';
var degMap = {}, clsSet = {};
function colorOf(cls){
  if (!cls) return '#5a6b7a';
  var h=0; for (var i=0;i<cls.length;i++) h=(h*31+cls.charCodeAt(i))%360;
  return 'hsl('+h+',55%,55%)';
}
function loadModule(mod){
  if (curMod===mod) { renderFunc(); return; }
  curMod = mod;
  var s = document.createElement('script');
  s.src = 'data/mod_'+mod+'.js';
  s.onload = function(){ renderFunc(); };
  document.head.appendChild(s);
}
function renderFunc(){
  if (!curMod) return;
  var M = window.CG['mod_'+curMod]; if (!M) return;
  var clsSel = document.getElementById('fCls');
  clsSel.innerHTML = '<option value="">全部</option>';
  clsSet = {}; degMap = {};
  M.f.forEach(function(f, i){
    var c = f[1]||'自由函数'; clsSet[c]=1;
    degMap[i]=0;
  });
  M.e.forEach(function(e){ degMap[e[0]]++; degMap[e[1]]++; });
  M.x.forEach(function(e){ degMap[e[0]]++; });
  M.xi.forEach(function(e){ degMap[e[1]]++; });
  Object.keys(clsSet).sort().forEach(function(c){ var o=document.createElement('option'); o.value=c; o.textContent=c; clsSel.appendChild(o); });
  drawFunc();
}
function drawFunc(){
  var M = window.CG['mod_'+curMod]; if (!M) return;
  var cls = document.getElementById('fCls').value;
  var q = document.getElementById('fSearch').value.trim().toLowerCase();
  var minDeg = parseInt(document.getElementById('fMinDeg').value||'0',10)||0;
  var cap = parseInt(document.getElementById('fCap').value||'600',10)||600;
  var types = {};
  document.querySelectorAll('#fTypes input').forEach(function(c){ if (c.checked) types[c.value]=1; });
  var fNodes=[], fLinks=[], idx=[];
  // 函数节点（过滤 + 度数截断）
  M.f.forEach(function(f, i){
    var c = f[1]||'自由函数';
    if (cls && c!==cls) return;
    if (q && f[0].toLowerCase().indexOf(q)<0 && c.toLowerCase().indexOf(q)<0) return;
    if (degMap[i] < minDeg) return;
    idx.push({i:i, f:f});
  });
  var shown = idx.length;
  if (shown > cap){
    idx.sort(function(a,b){ return degMap[b.i]-degMap[a.i]; });
    idx = idx.slice(0, cap);
    shown = cap;
  }
  var fIdxMap = {};
  idx.forEach(function(it, k){ fIdxMap[it.i]=k; });
  idx.forEach(function(it, k){
    var f = it.f;
    fNodes.push({ id:'f'+k, name:f[0], clsName:f[1]||'', file:f[2], line:f[3], kind:f[4], sig:f[5],
      deg:degMap[it.i],
      symbolSize: Math.max(8, Math.sqrt(degMap[it.i]||1)*4.5),
      itemStyle:{ color: colorOf(f[1]||''), borderColor:'#0d141d' } });
  });
  var extNodes = {};
  function extIdx(mod){ if (!(mod in extNodes)){ extNodes[mod]=fNodes.length; fNodes.push({ id:'x'+mod, name:'ext:'+mod, symbolSize:12, itemStyle:{color:'#3a4c5e', borderColor:'#5a6b7a'}, ext:true }); } return extNodes[mod]; }
  function hasType(t){ return !types || types[t]; }
  M.e.forEach(function(e){
    if (fIdxMap[e[0]]===undefined || fIdxMap[e[1]]===undefined) return;
    if (!hasType(e[2])) return;
    fLinks.push({ source:'f'+fIdxMap[e[0]], target:'f'+fIdxMap[e[1]], value:e[3], type:e[2],
      lineStyle:{ color:TYPE_COLOR[e[2]]||'#5a6b7a', width:Math.min(4, 0.5+Math.sqrt(e[3])), opacity:0.7 } });
  });
  if (hasType('cross_class') || hasType('free') || hasType('macro')){
    M.x.forEach(function(e){
      if (fIdxMap[e[0]]===undefined) return;
      var t = extIdx(e[1]);
      fLinks.push({ source:'f'+fIdxMap[e[0]], target:'x'+e[1], value:e[2], type:'ext',
        lineStyle:{ color:'#5a6b7a', width:Math.min(3,0.5+Math.sqrt(e[2])), opacity:0.45 } });
    });
    M.xi.forEach(function(e){
      if (fIdxMap[e[1]]===undefined) return;
      var t = extIdx(e[0]);
      fLinks.push({ source:'x'+e[0], target:'f'+fIdxMap[e[1]], value:e[2], type:'ext',
        lineStyle:{ color:'#5a6b7a', width:Math.min(3,0.5+Math.sqrt(e[2])), opacity:0.45 } });
    });
  }
  var opt = {
    backgroundColor:'transparent',
    tooltip: { formatter: function(p){
      if (p.dataType==='edge') return p.data.source+' → '+p.data.target+'：'+p.data.value+' 调用点';
      if (p.data.ext) return '外部模块节点（跨模块调用聚合）';
      return '<b>'+p.data.name+'</b>'+(p.data.clsName?' <span class="dim">'+p.data.clsName+'</span>':'')+
        '<br>'+p.data.file+':'+p.data.line+'<br>度数 '+p.data.deg+'';
    } },
    series: [{ type:'graph', layout:'force', roam:true, draggable:true,
      data:fNodes, links:fLinks,
      label:{ show:true, fontSize:10, color:'#cfe3ff' },
      force:{ repulsion: 200, edgeLength: [40,110], gravity:0.12 },
      lineStyle:{ opacity:0.6 },
      emphasis:{ focus:'adjacency', lineStyle:{ width:3 } },
      edgeSymbol:['none','arrow'], edgeSymbolSize:5 }]
  };
  fChart.setOption(opt, true);
  document.getElementById('status2').textContent =
    '模块 ' + curMod + '：函数 ' + M.f.length + ' · 显示 ' + shown +
    (shown>cap?'（已按度数截断，提高上限可看更多）':'') +
    ' · 类内边 ' + M.e.length + ' · 跨模块出 ' + M.x.length + ' / 入 ' + M.xi.length;
  fChart.off('click');
  fChart.on('click', function(p){ if (p.dataType==='node' && !p.data.ext) showDetail(p.data); });
}
function fIdxMapOf(id){ return parseInt(id.slice(1),10); }
fSel.onchange = function(){ loadModule(this.value); };
document.getElementById('fCls').onchange = drawFunc;
document.getElementById('fSearch').oninput = drawFunc;
document.getElementById('fMinDeg').onchange = drawFunc;
document.getElementById('fCap').onchange = drawFunc;
document.getElementById('fReset').onclick = function(){
  document.getElementById('fCls').value='';
  document.getElementById('fSearch').value='';
  document.getElementById('fMinDeg').value='0';
  document.getElementById('fCap').value='600';
  drawFunc();
};
document.getElementById('fHub').onclick = function(){
  var M = window.CG['mod_'+curMod]; if (!M) return;
  // 度数 TOP12 加亮
  var sorted = Object.keys(degMap).map(function(k){ return [parseInt(k,10),degMap[k]]; }).sort(function(a,b){ return b[1]-a[1]; }).slice(0,12);
  var top = {}; sorted.forEach(function(x){ top[x[0]]=1; });
  var opt = fChart.getOption();
  opt.series[0].data.forEach(function(n){
    if (n.ext) return;
    var i = fIdxMapOf(n.id);
    if (top[i]) { n.itemStyle={ color:'#ffd479', borderColor:'#ff9d5c', borderWidth:2, shadowBlur:10, shadowColor:'#ffd479' }; }
  });
  fChart.setOption(opt);
};
(function(){ // 边类型勾选
  var box = document.getElementById('fTypes');
  ['this','cross_class','free','macro','recursive'].forEach(function(t){
    var l=document.createElement('label');
    l.style.cssText='font-size:12px;color:var(--dim);';
    var cb=document.createElement('input'); cb.type='checkbox'; cb.value=t; cb.checked=true;
    cb.style.cssText='vertical-align:middle;';
    cb.onchange=drawFunc;
    l.appendChild(cb); l.appendChild(document.createTextNode(' '+TYPE_LABEL[t]+' '));
    box.appendChild(l);
  });
})();

/* ---------------- 详情 ---------------- */
function showDetail(n){
  var d = document.getElementById('detail');
  var M = window.CG['mod_'+curMod]; if (!M) return;
  var i = fIdxMapOf(n.id);
  var callers=[], callees=[];
  M.e.forEach(function(e){
    if (e[1]===i) callers.push([M.f[e[0]][0], e[2], e[3]]);
    if (e[0]===i) callees.push([M.f[e[1]][0], e[2], e[3]]);
  });
  M.x.forEach(function(e){ if (e[0]===i) callees.push(['ext:'+e[1], 'cross', e[2]]); });
  M.xi.forEach(function(e){ if (e[1]===i) callers.push(['ext:'+e[0], 'cross', e[2]]); });
  callers.sort(function(a,b){return b[2]-a[2];});
  callees.sort(function(a,b){return b[2]-a[2];});
  var f = function(c){ return (TYPE_LABEL[c[1]]||c[1])+'×'+c[2]; };
  var h = '<b>'+n.name+'</b>' + (n.clsName?' <span class="dim">'+n.clsName+'</span>':'') +
    ' <span class="dim">('+n.kind+')</span><br>' +
    '<span class="dim">'+n.file+':'+n.line+'</span><br>' +
    (n.sig?'签名：<code>'+n.sig+'</code><br>':'') +
    '调用方 <b>'+callers.length+'</b>：' + (callers.slice(0,25).map(f).join('，')||'无') + '<br>' +
    '被调用 <b>'+callees.length+'</b>：' + (callees.slice(0,25).map(f).join('，')||'无');
  d.innerHTML = h;
  d.style.display='block';
}

/* ---------------- 枢纽表格 ---------------- */
function hubHtml(list){
  return list.map(function(h, i){
    return '<li><span class="hub-n">'+(i+1)+'</span><span class="hub-name">'+h[1]+'</span>' +
      '<span class="dim">'+h[2]+' · '+h[3]+'</span><span class="dim">'+h[4]+':'+h[5]+'</span>' +
      '<b>'+h[6]+'</b><span class="dim">调用点</span></li>';
  }).join('');
}
document.getElementById('hIn').innerHTML = hubHtml(CG.hubs_in);
document.getElementById('hOut').innerHTML = hubHtml(CG.hubs_out);

window.addEventListener('resize', function(){ mChart.resize(); fChart.resize(); });
loadModule(CG.modules[0].n);
</script>
</body>
</html>
'''

def main():
    os.makedirs(DATA_DIR, exist_ok=True)
    build_summary()
    build_modules()
    with io.open(os.path.join(BASE, 'callgraph.html'), 'w', encoding='utf-8') as f:
        f.write(HTML)
    print('callgraph.html written, size=%d' % os.path.getsize(os.path.join(BASE, 'callgraph.html')))


if __name__ == '__main__':
    main()
