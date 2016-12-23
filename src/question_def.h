#ifndef QUESTION_DEF_H
#define QUESTION_DEF_H

#if MK_LANGUAGE==0
#define Q_PRICE_TREND "Current price movement trends?"
#define A_DIRECTION_TREMD "\tA:left ↘\tB:right ↗\tC:high →\t D: low →"
#endif

#if MK_LANGUAGE==1
#define Q_PRICE_TREND "近期价格运动方向?"
#define A_DIRECTION_TREMD "\tA:左侧向下 ↘\tB:右侧向上 ↗\tC:近期高位横向 →\t D: 近期低位横向 →"
#endif

//(dir,velocity)
#define R_PRICE_TREND	"A(-1,-1) B(1,1) C(0,0) D(0,0)"

#endif