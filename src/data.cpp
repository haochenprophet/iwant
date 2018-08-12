#include "data.h"
#include "data_class.h"

CdataTypeToken data_type_token[]
{
	{UdataType::none, "none"},
	{ UdataType::bool_b,"bool" },
	{ UdataType::char_c,"char" },
	{ UdataType::unsigned_char_uc,"unsigned[ \t]char" },
	{ UdataType::wchart_wc,"wchart" },
	{ UdataType::short_s,"short" },
	{ UdataType::unsigned_short_us,"unsigned[ \t]short" },
	{ UdataType::int_i,"int" },
	{ UdataType::unsigned_int_ui,"unsigned[ \t]int" },
	{ UdataType::long_l,"long" },
	{ UdataType::unsigned_long_ul,"unsigned[ \t]long" },
	{ UdataType::long_long_ll,"long[ \t]long" },
	{ UdataType::unsigned_long_long_ull,"unsigned[ \t]long[ \t]long" },
	{ UdataType::float_f,"float" },
	{ UdataType::double_d,"double" },
	{ UdataType::void_p,"void[ \t]*[ \t]" },
	{ UdataType::char_cp,"char[ \t]*[ \t]" },
	{ UdataType::unsigned_char_ucp,"unsigned[ \t]char[ \t]*[ \t]" },
	{ UdataType::wchart_wcp,"wchart[ \t]*[ \t]" },
	{ UdataType::short_sp,"short[ \t]*[ \t]" },
	{ UdataType::unsigned_short_usp,"unsigned[ \t]short[ \t]*[ \t]" },
	{ UdataType::int_ip,"int[ \t]*[ \t]" },
	{ UdataType::unsigned_int_uip,"unsigned[ \t]short[ \t]*[ \t]" },
	{ UdataType::long_lp,"long[ \t]*[ \t]" },
	{ UdataType::unsigned_long_ulp,"unsigned[ \t]long[ \t]*[ \t]" },
	{ UdataType::long_long_llp,"long[ \t]long[ \t]*[ \t]" },
	{ UdataType::unsigned_long_long_ullp,"unsigned[ \t]long[ \t]long[ \t]*[ \t]" },
	{ UdataType::float_fp,"float[ \t]*[ \t]" },
	{ UdataType::double_dp,"double[ \t]*[ \t]" },
	{ UdataType::std_string_ss,"string[ \t]*[ \t]" },
	{ UdataType::std_wstring_sws,"wstring[ \t]*[ \t]" },
	//end flag
	{ UdataType::none, nullptr},//nullptr is end flag
};

#define data_type_token_count (sizeof(data_type_token)/sizeof(CdataTypeToken))

UdataType CdataTypeToken::isme(char * token)
{
	if (!token) return (UdataType)-1;
	for (; *token != 0; token++) if(isprint(*token)) break; //skip not print char
	char *t = this->token;//

	for (; *token != 0 && *t != 0; t++, token++)
	{
		for (; *t != 0 && (*t == '[' || *t == ']' || *t == ' ' || *t == '\t');t++);//skip [ \t]
		for (; *token != 0; token++) if (isprint(*token)) break;//skip not print char
		if (*t == 0||*token==0) break;
		if (*token == *t) continue;
		return (UdataType) -1;
	}
	if (*t == 0 &&*token == 0) return this->type;
	return (UdataType)-1;
}

Cdata::Cdata()
{
	this->name = "Cdata";
	this->alias = "data";
}

Cdata::~Cdata()
{
}

int Udata::runme(void * myname, Udata *p)
{
	if (strcmp("set", (char *)myname) == 0) { this->set_by_type(p);  return 0; }
	if (strcmp("get", (char *)myname) == 0) { return (int) this->get_by_type(p);}
	if (strcmp("cmp", (char *)myname) == 0) {return this->cmp_by_type(p); }
	if (strcmp("and", (char *)myname) == 0) {return (int) this->and_by_type(p); }
	if (strcmp("or", (char *)myname) == 0) {return (int) this->or_by_type(p);}
	return -1;
}

void Udata::set_by_type(Udata *p)
{
	if (p->type == UdataType::none) return;
	if (p->type == UdataType::bool_b) return this->set(p->data.b, p->len);
	if (p->type == UdataType::char_c) return this->set(p->data.c, p->len);
	if (p->type == UdataType::unsigned_char_uc) return this->set(p->data.uc, p->len);
	if (p->type == UdataType::wchart_wc) return this->set(p->data.wc, p->len);
	if (p->type == UdataType::short_s) return this->set(p->data.s, p->len);
	if (p->type == UdataType::unsigned_short_us) return this->set(p->data.us, p->len);
	if (p->type == UdataType::int_i) return this->set(p->data.i, p->len);
	if (p->type == UdataType::unsigned_int_ui) return this->set(p->data.ui, p->len);
	if (p->type == UdataType::long_l) return this->set(p->data.l, p->len);
	if (p->type == UdataType::unsigned_long_ul) return this->set(p->data.ul, p->len);
	if (p->type == UdataType::long_long_ll) return this->set(p->data.ll, p->len);
	if (p->type == UdataType::unsigned_long_long_ull) return this->set(p->data.ull, p->len);
	if (p->type == UdataType::float_f) return this->set(p->data.f, p->len);
	if (p->type == UdataType::double_d) return this->set(p->data.d, p->len);
	if (p->type == UdataType::void_p) return this->set(p->data.p, p->len);
	if (p->type == UdataType::char_cp) return this->set(p->data.cp, p->len);
	if (p->type == UdataType::unsigned_char_ucp) return this->set(p->data.ucp, p->len);
	if (p->type == UdataType::wchart_wcp) return this->set(p->data.wcp, p->len);
	if (p->type == UdataType::short_sp) return this->set(p->data.sp, p->len);
	if (p->type == UdataType::unsigned_short_usp) return this->set(p->data.usp, p->len);
	if (p->type == UdataType::int_ip) return this->set(p->data.ip, p->len);
	if (p->type == UdataType::unsigned_int_uip) return this->set(p->data.uip, p->len);
	if (p->type == UdataType::long_lp) return this->set(p->data.lp, p->len);
	if (p->type == UdataType::unsigned_long_ulp) return this->set(p->data.ulp, p->len);
	if (p->type == UdataType::long_long_llp) return this->set(p->data.llp, p->len);
	if (p->type == UdataType::unsigned_long_long_ullp) return this->set(p->data.ullp, p->len);
	if (p->type == UdataType::float_fp) return this->set(p->data.fp, p->len);
	if (p->type == UdataType::double_dp) return this->set(p->data.dp, p->len);
	if (p->type == UdataType::std_string_ss) return this->set(p->data.ss, p->len);
	if (p->type == UdataType::std_wstring_sws) return this->set(p->data.sws, p->len);
}

size_t Udata::get_by_type(Udata *p)
{
	if (p->type == UdataType::none) return 0;
	if (p->type == UdataType::bool_b) return this->get(&p->data.b);
	if (p->type == UdataType::char_c) return this->get(&p->data.c);
	if (p->type == UdataType::unsigned_char_uc) return this->get(&p->data.uc);
	if (p->type == UdataType::wchart_wc) return this->get(&p->data.wc);
	if (p->type == UdataType::short_s) return this->get(&p->data.s);
	if (p->type == UdataType::unsigned_short_us) return this->get(&p->data.us);
	if (p->type == UdataType::int_i) return this->get(&p->data.i);
	if (p->type == UdataType::unsigned_int_ui) return this->get(&p->data.ui);
	if (p->type == UdataType::long_l) return this->get(&p->data.l);
	if (p->type == UdataType::unsigned_long_ul) return this->get(&p->data.ul);
	if (p->type == UdataType::long_long_ll) return this->get(&p->data.ll);
	if (p->type == UdataType::unsigned_long_long_ull) return this->get(&p->data.ull);
	if (p->type == UdataType::float_f) return this->get(&p->data.f);
	if (p->type == UdataType::double_d) return this->get(&p->data.d);
	if (p->type == UdataType::void_p) return this->get(&p->data.p);
	if (p->type == UdataType::char_cp) return this->get(&p->data.cp);
	if (p->type == UdataType::unsigned_char_ucp) return this->get(&p->data.ucp);
	if (p->type == UdataType::wchart_wcp) return this->get(&p->data.wcp);
	if (p->type == UdataType::short_sp) return this->get(&p->data.sp);
	if (p->type == UdataType::unsigned_short_usp) return this->get(&p->data.usp);
	if (p->type == UdataType::int_ip) return this->get(&p->data.ip);
	if (p->type == UdataType::unsigned_int_uip) return this->get(&p->data.uip);
	if (p->type == UdataType::long_lp) return this->get(&p->data.lp);
	if (p->type == UdataType::unsigned_long_ulp) return this->get(&p->data.ulp);
	if (p->type == UdataType::long_long_llp) return this->get(&p->data.llp);
	if (p->type == UdataType::unsigned_long_long_ullp) return this->get(&p->data.ullp);
	if (p->type == UdataType::float_fp) return this->get(&p->data.fp);
	if (p->type == UdataType::double_dp) return this->get(&p->data.dp);
	if (p->type == UdataType::std_string_ss) return this->get(&p->data.ss);
	if (p->type == UdataType::std_wstring_sws) return this->get(&p->data.sws);
	return 0;
}
int Udata::cmp_by_type(Udata *p)
{
	if (p->type == UdataType::none) return 2;//2:not cmp
	if (p->type == UdataType::bool_b) return this->cmp(p->data.b);
	if (p->type == UdataType::char_c) return this->cmp(p->data.c);
	if (p->type == UdataType::unsigned_char_uc) return this->cmp(p->data.uc);
	if (p->type == UdataType::wchart_wc) return this->cmp(p->data.wc);
	if (p->type == UdataType::short_s) return this->cmp(p->data.s);
	if (p->type == UdataType::unsigned_short_us) return this->cmp(p->data.us);
	if (p->type == UdataType::int_i) return this->cmp(p->data.i);
	if (p->type == UdataType::unsigned_int_ui) return this->cmp(p->data.ui);
	if (p->type == UdataType::long_l) return this->cmp(p->data.l);
	if (p->type == UdataType::unsigned_long_ul) return this->cmp(p->data.ul);
	if (p->type == UdataType::long_long_ll) return this->cmp(p->data.ll);
	if (p->type == UdataType::unsigned_long_long_ull) return this->cmp(p->data.ull);
	if (p->type == UdataType::float_f) return this->cmp(p->data.f);
	if (p->type == UdataType::double_d) return this->cmp(p->data.d);
	if (p->type == UdataType::void_p) return this->cmp(p->data.p);
	if (p->type == UdataType::char_cp) return this->cmp(p->data.cp, p->len);
	if (p->type == UdataType::unsigned_char_ucp) return this->cmp(p->data.ucp, p->len);
	if (p->type == UdataType::wchart_wcp) return this->cmp(p->data.wcp, p->len);
	if (p->type == UdataType::short_sp) return this->cmp(p->data.sp, p->len);
	if (p->type == UdataType::unsigned_short_usp) return this->cmp(p->data.usp, p->len);
	if (p->type == UdataType::int_ip) return this->cmp(p->data.ip, p->len);
	if (p->type == UdataType::unsigned_int_uip) return this->cmp(p->data.uip, p->len);
	if (p->type == UdataType::long_lp) return this->cmp(p->data.lp, p->len);
	if (p->type == UdataType::unsigned_long_ulp) return this->cmp(p->data.ulp, p->len);
	if (p->type == UdataType::long_long_llp) return this->cmp(p->data.llp, p->len);
	if (p->type == UdataType::unsigned_long_long_ullp) return this->cmp(p->data.ullp, p->len);
	if (p->type == UdataType::float_fp) return this->cmp(p->data.fp, p->len);
	if (p->type == UdataType::double_dp) return this->cmp(p->data.dp, p->len);
	if (p->type == UdataType::std_string_ss) return this->cmp(p->data.ss);
	if (p->type == UdataType::std_wstring_sws) return this->cmp(p->data.sws);
	return 2;//2:not cmp
}
bool Udata::and_by_type(Udata *p)
{
	if (p->type == UdataType::none) return false;//default return false
	if (p->type == UdataType::bool_b) return this-> and (p->data.b);
	if (p->type == UdataType::char_c) return this-> and (p->data.c);
	if (p->type == UdataType::unsigned_char_uc) return this-> and (p->data.uc);
	if (p->type == UdataType::wchart_wc) return this-> and (p->data.wc);
	if (p->type == UdataType::short_s) return this-> and (p->data.s);
	if (p->type == UdataType::unsigned_short_us) return this-> and (p->data.us);
	if (p->type == UdataType::int_i) return this-> and (p->data.i);
	if (p->type == UdataType::unsigned_int_ui) return this-> and (p->data.ui);
	if (p->type == UdataType::long_l) return this-> and (p->data.l);
	if (p->type == UdataType::unsigned_long_ul) return this-> and (p->data.ul);
	if (p->type == UdataType::long_long_ll) return this-> and (p->data.ll);
	if (p->type == UdataType::unsigned_long_long_ull) return this-> and (p->data.ull);
	if (p->type == UdataType::float_f) return this-> and (p->data.f);
	if (p->type == UdataType::double_d) return this-> and (p->data.d);
	if (p->type == UdataType::void_p) return this-> and (p->data.p);
	if (p->type == UdataType::char_cp) return this-> and (p->data.cp, p->len);
	if (p->type == UdataType::unsigned_char_ucp) return this-> and (p->data.ucp, p->len);
	if (p->type == UdataType::wchart_wcp) return this-> and (p->data.wcp, p->len);
	if (p->type == UdataType::short_sp) return this-> and (p->data.sp, p->len);
	if (p->type == UdataType::unsigned_short_usp) return this-> and (p->data.usp, p->len);
	if (p->type == UdataType::int_ip) return this-> and (p->data.ip, p->len);
	if (p->type == UdataType::unsigned_int_uip) return this-> and (p->data.uip, p->len);
	if (p->type == UdataType::long_lp) return this-> and (p->data.lp, p->len);
	if (p->type == UdataType::unsigned_long_ulp) return this-> and (p->data.ulp, p->len);
	if (p->type == UdataType::long_long_llp) return this-> and (p->data.llp, p->len);
	if (p->type == UdataType::unsigned_long_long_ullp) return this-> and (p->data.ullp, p->len);
	if (p->type == UdataType::float_fp) return this-> and (p->data.fp, p->len);
	if (p->type == UdataType::double_dp) return this-> and (p->data.dp, p->len);
	if (p->type == UdataType::std_string_ss) return this-> and (p->data.ss);
	if (p->type == UdataType::std_wstring_sws) return this-> and (p->data.sws);
	return false;
}
bool Udata::or_by_type(Udata *p)
{
	if (p->type == UdataType::none) return true;//defult return true
	if (p->type == UdataType::bool_b) return this-> or (p->data.b);
	if (p->type == UdataType::char_c) return this-> or (p->data.c);
	if (p->type == UdataType::unsigned_char_uc) return this-> or (p->data.uc);
	if (p->type == UdataType::wchart_wc) return this-> or (p->data.wc);
	if (p->type == UdataType::short_s) return this-> or (p->data.s);
	if (p->type == UdataType::unsigned_short_us) return this-> or (p->data.us);
	if (p->type == UdataType::int_i) return this-> or (p->data.i);
	if (p->type == UdataType::unsigned_int_ui) return this-> or (p->data.ui);
	if (p->type == UdataType::long_l) return this-> or (p->data.l);
	if (p->type == UdataType::unsigned_long_ul) return this-> or (p->data.ul);
	if (p->type == UdataType::long_long_ll) return this-> or (p->data.ll);
	if (p->type == UdataType::unsigned_long_long_ull) return this-> or (p->data.ull);
	if (p->type == UdataType::float_f) return this-> or (p->data.f);
	if (p->type == UdataType::double_d) return this-> or (p->data.d);
	if (p->type == UdataType::void_p) return this-> or (p->data.p);
	if (p->type == UdataType::char_cp) return this-> or (p->data.cp, p->len);
	if (p->type == UdataType::unsigned_char_ucp) return this-> or (p->data.ucp, p->len);
	if (p->type == UdataType::wchart_wcp) return this-> or (p->data.wcp, p->len);
	if (p->type == UdataType::short_sp) return this-> or (p->data.sp, p->len);
	if (p->type == UdataType::unsigned_short_usp) return this-> or (p->data.usp, p->len);
	if (p->type == UdataType::int_ip) return this-> or (p->data.ip, p->len);
	if (p->type == UdataType::unsigned_int_uip) return this-> or (p->data.uip, p->len);
	if (p->type == UdataType::long_lp) return this-> or (p->data.lp, p->len);
	if (p->type == UdataType::unsigned_long_ulp) return this-> or (p->data.ulp, p->len);
	if (p->type == UdataType::long_long_llp) return this-> or (p->data.llp, p->len);
	if (p->type == UdataType::unsigned_long_long_ullp) return this-> or (p->data.ullp, p->len);
	if (p->type == UdataType::float_fp) return this-> or (p->data.fp, p->len);
	if (p->type == UdataType::double_dp) return this-> or (p->data.dp, p->len);
	if (p->type == UdataType::std_string_ss) return this-> or (p->data.ss);
	if (p->type == UdataType::std_wstring_sws) return this-> or (p->data.sws);
	return true;
}

void Udata::set(char c, size_t len)
{
	this->data.c = c;
	this->type = UdataType::char_c; 
	this->len = len;
}
void Udata::set(unsigned char uc, size_t len)
{
	this->data.uc = uc;
	this->type = UdataType::unsigned_char_uc; 
	this->len = len;
}
void Udata::set(wchar_t wc, size_t len)
{
	this->data.wc = wc;
	this->type = UdataType::wchart_wc; 
	this->len = len;
}
void Udata::set(short s, size_t len)
{
	this->data.s = s;
	this->type = UdataType::short_s; 
	this->len = len;
}
void Udata::set(unsigned short us, size_t len)
{
	this->data.us = us;
	this->type = UdataType::unsigned_short_us; 
	this->len = len;
}
void Udata::set(int i, size_t len)
{
	this->data.i = i;
	this->type = UdataType::int_i; 
	this->len = len;
}
void Udata::set(unsigned int ui, size_t len)
{
	this->data.ui = ui;
	this->type = UdataType::unsigned_int_ui; 
	this->len = len;
}
void Udata::set(long l, size_t len)
{
	this->data.l = l;
	this->type = UdataType::long_l; 
	this->len = len;
}
void Udata::set(unsigned long ul, size_t len)
{
	this->data.ul = ul;
	this->type = UdataType::unsigned_long_ul; 
	this->len = len;
}
void Udata::set(long long ll, size_t len)
{
	this->data.ll = ll;
	this->type = UdataType::long_long_ll; 
	this->len = len;
}
void Udata::set(unsigned long long ull, size_t len)
{
	this->data.ull = ull;
	this->type = UdataType::unsigned_long_long_ull; 
	this->len = len;
}
void Udata::set(float f, size_t len)
{
	this->data.f = f;
	this->type = UdataType::float_f; 
	this->len = len;
}
void Udata::set(double d, size_t len)
{
	this->data.d = d;
	this->type = UdataType::double_d; 
	this->len = len;
}
void Udata::set(void * p, size_t len)
{
	this->data.p = p;
	this->type = UdataType::void_p;
	this->len = len;
}
void Udata::set(char *cp, size_t len)
{
	this->data.cp = cp;
	this->type = UdataType::char_cp;
	this->len = len;
}
void Udata::set(unsigned char* ucp, size_t len)
{
	this->data.ucp = ucp;
	this->type = UdataType::unsigned_char_ucp;
	this->len = len;
}
void Udata::set(wchar_t *wcp, size_t len)
{
	this->data.wcp = wcp;
	this->type = UdataType::wchart_wcp;
	this->len = len;
}
void Udata::set(short * sp, size_t len)
{
	this->data.sp = sp;
	this->type = UdataType::short_sp;
	this->len = len;
}
void Udata::set(unsigned short * usp, size_t len)
{
	this->data.usp = usp;
	this->type = UdataType::unsigned_short_usp;
	this->len = len;
}
void Udata::set(int *ip, size_t len)
{
	this->data.ip = ip;
	this->type = UdataType::int_ip;
	this->len = len;
}
void Udata::set(unsigned int *uip, size_t len)
{
	this->data.uip = uip;
	this->type = UdataType::unsigned_int_uip;
	this->len = len;
}
void Udata::set(long *lp, size_t len)
{
	this->data.lp = lp;
	this->type = UdataType::long_lp;
	this->len = len;
}
void Udata::set(unsigned long *ulp, size_t len)
{
	this->data.ulp = ulp;
	this->type = UdataType::unsigned_long_ulp;
	this->len = len;
}
void Udata::set(long long *llp, size_t len)
{
	this->data.llp = llp;
	this->type = UdataType::long_long_llp;
	this->len = len;
}
void Udata::set(unsigned long long *ullp, size_t len)
{
	this->data.ullp = ullp;
	this->type = UdataType::unsigned_long_long_ullp;
	this->len = len;
}
void Udata::set(float *fp, size_t len)
{
	this->data.fp = fp;
	this->type = UdataType::float_fp;
	this->len = len;
}
void Udata::set(double *dp, size_t len)
{
	this->data.dp = dp;
	this->type = UdataType::double_dp;
	this->len = len;
}
void Udata::set(std::string *ss, size_t len)
{
	this->data.ss = ss;
	this->type = UdataType::std_string_ss;
	this->len = len;
}
void Udata::set(std::wstring *sws, size_t len)
{
	this->data.sws = sws;
	this->type = UdataType::std_wstring_sws;
	this->len = len;
}
void Udata::set(Udata *p, size_t len)
{
	this->type = p->type;
	this->data = p->data;
	this->len = len;
}
void Udata::set(u_data *p, size_t len)
{
	this->data = *p;
	this->len = len;
}
//get
size_t Udata::get(char * c)
{
	*c = this->data.c; return this->len;
}
size_t Udata::get(unsigned char * uc)
{
	*uc = this->data.uc; return this->len;
}
size_t Udata::get(wchar_t * wc)
{
	*wc = this->data.wc; return this->len;
}
size_t Udata::get(short * s)
{
	*s = this->data.s; return this->len;
}
size_t Udata::get(unsigned short * us)
{
	*us = this->data.us; return this->len;
}
size_t Udata::get(int * i)
{
	*i = this->data.i; return this->len;
}
size_t Udata::get(unsigned int * ui)
{
	*ui = this->data.ui; return this->len;
}
size_t Udata::get(long * l)
{
	*l = this->data.l; return this->len;
}
size_t Udata::get(unsigned long * ul)
{
	*ul = this->data.ul; return this->len;
}
size_t Udata::get(long long * ll)
{
	*ll = this->data.ll; return this->len;
}
size_t Udata::get(unsigned long long * ull)
{
	*ull = this->data.ull; return this->len;
}
size_t Udata::get(float * f)
{
	*f = this->data.f; return this->len;
}
size_t Udata::get(double * d)
{
	*d = this->data.d; return this->len;
}
size_t Udata::get(void * * p)
{
	*p = this->data.p; return this->len;
}
size_t Udata::get(char * *cp)
{
	*cp = this->data.cp; return this->len;
}
size_t Udata::get(unsigned char* * ucp)
{
	*ucp = this->data.ucp; return this->len;
}
size_t Udata::get(wchar_t * *wcp)
{
	*wcp = this->data.wcp; return this->len;
}
size_t Udata::get(short * * sp)
{
	*sp = this->data.sp; return this->len;
}
size_t Udata::get(unsigned short * * usp)
{
	*usp = this->data.usp; return this->len;
}
size_t Udata::get(int * *ip)
{
	*ip = this->data.ip; return this->len;
}
size_t Udata::get(unsigned int * *uip)
{
	*uip = this->data.uip; return this->len;
}
size_t Udata::get(long * *lp)
{
	*lp = this->data.lp; return this->len;
}
size_t Udata::get(unsigned long * *ulp)
{
	*ulp = this->data.ulp; return this->len;
}
size_t Udata::get(long long * *llp)
{
	*llp = this->data.llp; return this->len;
}
size_t Udata::get(unsigned long long * *ullp)
{
	*ullp = this->data.ullp; return this->len;
}
size_t Udata::get(float * *fp)
{
	*fp = this->data.fp; return this->len;
}
size_t Udata::get(double * *dp)
{
	*dp = this->data.dp; return this->len;
}
size_t Udata::get(std::string * *ss)
{
	*ss = this->data.ss; return this->len;
}
size_t Udata::get(std::wstring * *sws)
{
	*sws = this->data.sws; return this->len;
}

int Udata::cmp(char c)
{
	if (this->data.c == c) return 0;
	return (this->data.c > c)?1:-1;
}
int Udata::cmp(unsigned char uc)
{
	if (this->data.uc == uc) return 0;
	return (this->data.uc > uc) ? 1 : -1;
}
int Udata::cmp(wchar_t wc)
{
	if (this->data.wc == wc) return 0;
	return (this->data.wc > wc) ? 1 : -1;
}
int Udata::cmp(short s)
{
	if (this->data.s == s) return 0;
	return (this->data.s > s) ? 1 : -1;
}
int Udata::cmp(unsigned short us)
{
	if (this->data.us == us) return 0;
	return (this->data.us > us) ? 1 : -1;
}
int Udata::cmp(int i)
{
	if (this->data.i == i) return 0;
	return (this->data.i > i) ? 1 : -1;
}
int Udata::cmp(unsigned int ui)
{
	if (this->data.ui == ui) return 0;
	return (this->data.ui > ui) ? 1 : -1;
}
int Udata::cmp(long l)
{
	if (this->data.l == l) return 0;
	return (this->data.l > l) ? 1 : -1;
}
int Udata::cmp(unsigned long ul)
{
	if (this->data.ul == ul) return 0;
	return (this->data.ul > ul) ? 1 : -1;
}
int Udata::cmp(long long ll)
{
	if (this->data.ll == ll) return 0;
	return (this->data.ll > ll) ? 1 : -1;
}
int Udata::cmp(unsigned long long ull)
{
	if (this->data.ull == ull) return 0;
	return (this->data.ull > ull) ? 1 : -1;
}
int Udata::cmp(float f)
{
	if (this->data.f == f) return 0;
	return (this->data.f > f) ? 1 : -1;
}
int Udata::cmp(double d)
{
	if (this->data.d == d) return 0;
	return (this->data.d > d) ? 1 : -1;
}
int Udata::cmp(void * p)//!!
{
	if (this->data.p == p) return 0;
	return (this->data.p> p) ? 1 : -1;
}

T_TYPE int Udata::cmp_t(T a, T b, size_t len_a, size_t len_b)
{
	size_t len = (len_a > len_b) ? len_b : len_a;
	if (--len) { OUT_ERROR return 2; }
	for (; len > 0; len--)
	{
		if(a[len]>b[len]) return 1;
		if(a[len]<b[len]) return -1;
	}
	if (len_a == len_b) 	return 0;
	return (len_a > len_b) ? 1 : -1;
}

int Udata::cmp(char *cp, size_t len)
{
	return this->cmp_t(this->data.cp, cp, this->len, len);
}
int Udata::cmp(unsigned char* ucp, size_t len)
{
	return this->cmp_t(this->data.ucp, ucp, this->len, len);
}
int Udata::cmp(wchar_t *wcp, size_t len)
{
	return this->cmp_t(this->data.wcp, wcp, this->len, len);
}
int Udata::cmp(short * sp, size_t len)
{
	return this->cmp_t(this->data.sp, sp, this->len, len);
}
int Udata::cmp(unsigned short * usp, size_t len)
{
	return this->cmp_t(this->data.usp, usp, this->len, len);
}
int Udata::cmp(int *ip, size_t len)
{
	return this->cmp_t(this->data.ip, ip, this->len, len);
}
int Udata::cmp(unsigned int *uip, size_t len)
{
	return this->cmp_t(this->data.uip, uip, this->len, len);
}
int Udata::cmp(long *lp, size_t len)
{
	return this->cmp_t(this->data.lp, lp, this->len, len);
}
int Udata::cmp(unsigned long *ulp, size_t len)
{
	return this->cmp_t(this->data.ulp, ulp, this->len, len);
}
int Udata::cmp(long long *llp, size_t len)
{
	return this->cmp_t(this->data.llp, llp, this->len, len);
}
int Udata::cmp(unsigned long long *ullp, size_t len)
{
	return this->cmp_t(this->data.ullp, ullp, this->len, len);
}
int Udata::cmp(float *fp, size_t len)
{
	return this->cmp_t(this->data.fp, fp, this->len, len);
}
int Udata::cmp(double *dp, size_t len)
{
	return this->cmp_t(this->data.dp, dp, this->len,len);
}
int Udata::cmp(std::string *ss)
{
	if (*this->data.ss == *ss) return 0;
	return  (*this->data.ss > *ss)?1: -1;
}
int Udata::cmp(std::wstring *sws)
{
	if (*this->data.sws == *sws) return 0;
	return  (*this->data.sws > *sws) ? 1 : -1;
}
int Udata::cmp(Udata *p)
{
	return this->cmp_t((unsigned char*)&this->data, (unsigned char*)&p->data,this->len, (size_t)sizeof(u_data));
}
int Udata::cmp(u_data *p)
{
	return this->cmp_t((unsigned char*)&this->data,(unsigned char*) p, this->len, (size_t)sizeof(u_data));
}

T_TYPE bool Udata::and_t(T a, T b, size_t len_a, size_t len_b)
{
	size_t len = (len_a > len_b) ? len_b : len_a;
	if (--len < 0) { OUT_ERROR return false; }
	for (; len > 0; len--)
	{
		if (a[len]&&b[len]) continue;
		return false;
	}
	if((len_a != len_b)) return false;
	return true;
}
bool Udata:: and (bool b)
{
	return (this->data.b&&b);
}
bool Udata:: and (char c)
{
	return (this->data.c&&c);
}
bool Udata:: and (unsigned char uc)
{
	return (this->data.uc&&uc);
}
bool Udata:: and (wchar_t wc)
{
	return (this->data.wc&&wc);
}
bool Udata:: and (short s)
{
	return (this->data.s&&s);
}
bool Udata:: and (unsigned short us)
{
	return (this->data.us&&us);
}
bool Udata:: and (int i)
{
	return (this->data.i&&i);
}
bool Udata:: and (unsigned int ui)
{
	return (this->data.ui&&ui);
}
bool Udata:: and (long l)
{
	return (this->data.l&&l);
}
bool Udata:: and (unsigned long ul)
{
	return (this->data.ul&&ul);
}
bool Udata:: and (long long ll)
{
	return (this->data.ll&&ll);
}
bool Udata:: and (unsigned long long ull)
{
	return (this->data.ull&&ull);
}
bool Udata:: and (float f)
{
	return (this->data.f&&f);
}
bool Udata:: and (double d)
{
	return (this->data.d&&d);
}
bool Udata:: and (void * p)
{
	return (this->data.p&&p);
}
bool Udata:: and (char *cp, size_t len)
{
	return this->and_t(this->data.cp,cp,this->len,len);
}
bool Udata:: and (unsigned char* ucp, size_t len)
{
	return this->and_t(this->data.ucp, ucp, this->len, len);
}
bool Udata:: and (wchar_t *wcp, size_t len)
{
	return this->and_t(this->data.wcp, wcp, this->len, len);
}
bool Udata:: and (short * sp, size_t len)
{
	return this->and_t(this->data.sp, sp, this->len, len);
}
bool Udata:: and (unsigned short * usp, size_t len)
{
	return this->and_t(this->data.usp, usp, this->len, len);
}
bool Udata:: and (int *ip, size_t len)
{
	return this->and_t(this->data.ip, ip, this->len, len);
}
bool Udata:: and (unsigned int *uip, size_t len)
{
	return this->and_t(this->data.uip, uip, this->len, len);
}
bool Udata:: and (long *lp, size_t len)
{
	return this->and_t(this->data.lp, lp, this->len, len);
}
bool Udata:: and (unsigned long *ulp, size_t len)
{
	return this->and_t(this->data.ulp, ulp, this->len, len);
}
bool Udata:: and (long long *llp, size_t len)
{
	return this->and_t(this->data.llp, llp, this->len, len);
}
bool Udata:: and (unsigned long long *ullp, size_t len)
{
	return this->and_t(this->data.ullp, ullp, this->len, len);
}
bool Udata:: and (float *fp, size_t len)
{
	return this->and_t(this->data.fp, fp, this->len, len);
}
bool Udata:: and (double *dp, size_t len)
{
	return this->and_t(this->data.dp, dp, this->len, len);
}
bool Udata:: and (std::string *ss)
{
	return (*this->data.ss==*ss);
}
bool Udata:: and (std::wstring *sws)
{
	return (*this->data.sws == *sws);
}
bool Udata:: and (Udata *p) //use ull
{
	return (this->data.ull&&p->data.ull);
}
bool Udata:: and (u_data *p)//use ull
{
	return (this->data.ull&&p->ull);
}
T_TYPE bool Udata::or_t(T a, T b, size_t len_a, size_t len_b)
{
	size_t len = (len_a > len_b) ? len_b : len_a;
	if (--len < 0) { OUT_ERROR return false; }
	for (; len > 0; len--)
	{
		if (a[len] || b[len]) continue;
		return false;
	}
	if ((len_a != len_b)) return false;
	return true;
}
bool Udata:: or (bool b)
{
	return (this->data.b || b);
}
bool Udata:: or (char c)
{
	return (this->data.c || c);
}
bool Udata:: or (unsigned char uc)
{
	return (this->data.uc || uc);
}
bool Udata:: or (wchar_t wc)
{
	return (this->data.wc || wc);
}
bool Udata:: or (short s)
{
	return (this->data.s || s);
}
bool Udata:: or (unsigned short us)
{
	return (this->data.us || us);
}
bool Udata:: or (int i)
{
	return (this->data.i || i);
}
bool Udata:: or (unsigned int ui)
{
	return (this->data.ui || ui);
}
bool Udata:: or (long l)
{
	return (this->data.l || l);
}
bool Udata:: or (unsigned long ul)
{
	return (this->data.ul || ul);
}
bool Udata:: or (long long ll)
{
	return (this->data.ll || ll);
}
bool Udata:: or (unsigned long long ull)
{
	return (this->data.ull || ull);
}
bool Udata:: or (float f)
{
	return (this->data.f || f);
}
bool Udata:: or (double d)
{
	return (this->data.d || d);
}
bool Udata:: or (void * p)
{
	return (this->data.p || p);
}
bool Udata:: or (char *cp, size_t len)
{
	return this->or_t(this->data.cp, cp, this->len, len);
}
bool Udata:: or (unsigned char* ucp, size_t len)
{
	return this->or_t(this->data.ucp, ucp, this->len, len);
}
bool Udata:: or (wchar_t *wcp, size_t len)
{
	return this->or_t(this->data.wcp, wcp, this->len, len);
}
bool Udata:: or (short * sp, size_t len)
{
	return this->or_t(this->data.sp, sp, this->len, len);
}
bool Udata:: or (unsigned short * usp, size_t len)
{
	return this->or_t(this->data.usp, usp, this->len, len);
}
bool Udata:: or (int *ip, size_t len)
{
	return this->or_t(this->data.ip, ip, this->len, len);
}
bool Udata:: or (unsigned int *uip, size_t len)
{
	return this->or_t(this->data.uip, uip, this->len, len);
}
bool Udata:: or (long *lp, size_t len)
{
	return this->or_t(this->data.lp, lp, this->len, len);
}
bool Udata:: or (unsigned long *ulp, size_t len)
{
	return this->or_t(this->data.ulp, ulp, this->len, len);
}
bool Udata:: or (long long *llp, size_t len)
{
	return this->or_t(this->data.llp, llp, this->len, len);
}
bool Udata:: or (unsigned long long *ullp, size_t len)
{
	return this->or_t(this->data.ullp, ullp, this->len, len);
}
bool Udata:: or (float *fp, size_t len)
{
	return this->or_t(this->data.fp, fp, this->len, len);
}
bool Udata:: or (double *dp, size_t len)
{
	return this->or_t(this->data.dp, dp, this->len, len);
}
bool Udata:: or (std::string *ss)
{
	return (*this->data.ss == *ss);
}
bool Udata:: or (std::wstring *sws)
{
	return (*this->data.sws == *sws);
}
bool Udata:: or (Udata *p) //use ull
{
	return (this->data.ull || p->data.ull);
}
bool Udata:: or (u_data *p)//use ull
{
	return (this->data.ull || p->ull);
}
#if DATA_TEST

int main(int argc, char *argv[])
{
	std::cout<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<"\n";

	Udata data;
	std::cout<<data.data.ull<<endl;

	return 0;
}
#endif