#include "data.h"
#include "data_class.h"

CdataTypeToken data_type_token[]
{
	{UdataType::none,(char *) "none"},
	{ UdataType::bool_b,(char *) "bool" },
	{ UdataType::char_c,(char*)"char" },
	{ UdataType::unsigned_char_uc,(char*)"unsigned[ \t]char" },
	{ UdataType::wchart_wc,(char*)"wchart" },
	{ UdataType::short_s,(char*)"short" },
	{ UdataType::unsigned_short_us,(char*)"unsigned[ \t]short" },
	{ UdataType::int_i,(char*)"int" },
	{ UdataType::unsigned_int_ui,(char *)"unsigned[ \t]int" },
	{ UdataType::long_l,(char*)"long" },
	{ UdataType::unsigned_long_ul,(char*)"unsigned[ \t]long" },
	{ UdataType::long_long_ll,(char*)"long[ \t]long" },
	{ UdataType::unsigned_long_long_ull,(char*)"unsigned[ \t]long[ \t]long" },
	{ UdataType::float_f,(char*)"float" },
	{ UdataType::double_d,(char*)"double" },
	{ UdataType::void_p,(char*)"void[ \t]*[ \t]" },
	{ UdataType::char_cp,(char*)"char[ \t]*[ \t]" },
	{ UdataType::unsigned_char_ucp,(char*)"unsigned[ \t]char[ \t]*[ \t]" },
	{ UdataType::wchart_wcp,(char*)"wchart[ \t]*[ \t]" },
	{ UdataType::short_sp,(char*)"short[ \t]*[ \t]" },
	{ UdataType::unsigned_short_usp,(char*)"unsigned[ \t]short[ \t]*[ \t]" },
	{ UdataType::int_ip,(char*)"int[ \t]*[ \t]" },
	{ UdataType::unsigned_int_uip,(char *)"unsigned[ \t]short[ \t]*[ \t]" },
	{ UdataType::long_lp,(char*)"long[ \t]*[ \t]" },
	{ UdataType::unsigned_long_ulp,(char*)"unsigned[ \t]long[ \t]*[ \t]" },
	{ UdataType::long_long_llp,(char*)"long[ \t]long[ \t]*[ \t]" },
	{ UdataType::unsigned_long_long_ullp,(char*)"unsigned[ \t]long[ \t]long[ \t]*[ \t]" },
	{ UdataType::float_fp,(char*)"float[ \t]*[ \t]" },
	{ UdataType::double_dp,(char*)"double[ \t]*[ \t]" },
	{ UdataType::std_string_ss,(char*)"string[ \t]*[ \t]" },
	{ UdataType::std_wstring_sws,(char*)"wstring[ \t]*[ \t]" },
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
	if (strcmp("not", (char *)myname) == 0) { return (int)this->not_by_type(p); }
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

int Udata::get_by_type(Udata *p)
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
	if (p->type == UdataType::bool_b) return this-> and_(p->data.b);
	if (p->type == UdataType::char_c) return this-> and_(p->data.c);
	if (p->type == UdataType::unsigned_char_uc) return this-> and_(p->data.uc);
	if (p->type == UdataType::wchart_wc) return this-> and_(p->data.wc);
	if (p->type == UdataType::short_s) return this-> and_(p->data.s);
	if (p->type == UdataType::unsigned_short_us) return this-> and_(p->data.us);
	if (p->type == UdataType::int_i) return this-> and_(p->data.i);
	if (p->type == UdataType::unsigned_int_ui) return this-> and_(p->data.ui);
	if (p->type == UdataType::long_l) return this-> and_(p->data.l);
	if (p->type == UdataType::unsigned_long_ul) return this-> and_(p->data.ul);
	if (p->type == UdataType::long_long_ll) return this-> and_(p->data.ll);
	if (p->type == UdataType::unsigned_long_long_ull) return this-> and_(p->data.ull);
	if (p->type == UdataType::float_f) return this-> and_(p->data.f);
	if (p->type == UdataType::double_d) return this-> and_(p->data.d);
	if (p->type == UdataType::void_p) return this-> and_(p->data.p);
	if (p->type == UdataType::char_cp) return this-> and_(p->data.cp, p->len);
	if (p->type == UdataType::unsigned_char_ucp) return this-> and_(p->data.ucp, p->len);
	if (p->type == UdataType::wchart_wcp) return this-> and_(p->data.wcp, p->len);
	if (p->type == UdataType::short_sp) return this-> and_(p->data.sp, p->len);
	if (p->type == UdataType::unsigned_short_usp) return this-> and_(p->data.usp, p->len);
	if (p->type == UdataType::int_ip) return this-> and_(p->data.ip, p->len);
	if (p->type == UdataType::unsigned_int_uip) return this-> and_(p->data.uip, p->len);
	if (p->type == UdataType::long_lp) return this-> and_(p->data.lp, p->len);
	if (p->type == UdataType::unsigned_long_ulp) return this-> and_(p->data.ulp, p->len);
	if (p->type == UdataType::long_long_llp) return this-> and_(p->data.llp, p->len);
	if (p->type == UdataType::unsigned_long_long_ullp) return this-> and_(p->data.ullp, p->len);
	if (p->type == UdataType::float_fp) return this-> and_(p->data.fp, p->len);
	if (p->type == UdataType::double_dp) return this-> and_(p->data.dp, p->len);
	if (p->type == UdataType::std_string_ss) return this-> and_(p->data.ss);
	if (p->type == UdataType::std_wstring_sws) return this-> and_(p->data.sws);
	return false;
}
bool Udata::or_by_type(Udata *p)
{
	if (p->type == UdataType::none) return true;//defult return true
	if (p->type == UdataType::bool_b) return this-> or_ (p->data.b);
	if (p->type == UdataType::char_c) return this-> or_ (p->data.c);
	if (p->type == UdataType::unsigned_char_uc) return this-> or_ (p->data.uc);
	if (p->type == UdataType::wchart_wc) return this-> or_ (p->data.wc);
	if (p->type == UdataType::short_s) return this-> or_ (p->data.s);
	if (p->type == UdataType::unsigned_short_us) return this-> or_ (p->data.us);
	if (p->type == UdataType::int_i) return this-> or_ (p->data.i);
	if (p->type == UdataType::unsigned_int_ui) return this-> or_ (p->data.ui);
	if (p->type == UdataType::long_l) return this-> or_ (p->data.l);
	if (p->type == UdataType::unsigned_long_ul) return this-> or_ (p->data.ul);
	if (p->type == UdataType::long_long_ll) return this-> or_ (p->data.ll);
	if (p->type == UdataType::unsigned_long_long_ull) return this-> or_ (p->data.ull);
	if (p->type == UdataType::float_f) return this-> or_ (p->data.f);
	if (p->type == UdataType::double_d) return this-> or_ (p->data.d);
	if (p->type == UdataType::void_p) return this-> or_ (p->data.p);
	if (p->type == UdataType::char_cp) return this-> or_ (p->data.cp, p->len);
	if (p->type == UdataType::unsigned_char_ucp) return this-> or_ (p->data.ucp, p->len);
	if (p->type == UdataType::wchart_wcp) return this-> or_ (p->data.wcp, p->len);
	if (p->type == UdataType::short_sp) return this-> or_ (p->data.sp, p->len);
	if (p->type == UdataType::unsigned_short_usp) return this-> or_ (p->data.usp, p->len);
	if (p->type == UdataType::int_ip) return this-> or_ (p->data.ip, p->len);
	if (p->type == UdataType::unsigned_int_uip) return this-> or_ (p->data.uip, p->len);
	if (p->type == UdataType::long_lp) return this-> or_ (p->data.lp, p->len);
	if (p->type == UdataType::unsigned_long_ulp) return this-> or_ (p->data.ulp, p->len);
	if (p->type == UdataType::long_long_llp) return this-> or_ (p->data.llp, p->len);
	if (p->type == UdataType::unsigned_long_long_ullp) return this-> or_ (p->data.ullp, p->len);
	if (p->type == UdataType::float_fp) return this-> or_ (p->data.fp, p->len);
	if (p->type == UdataType::double_dp) return this-> or_ (p->data.dp, p->len);
	if (p->type == UdataType::std_string_ss) return this-> or_ (p->data.ss);
	if (p->type == UdataType::std_wstring_sws) return this-> or_ (p->data.sws);
	return true;
}
bool Udata::not_by_type(Udata *p)
{
	if (p->type == UdataType::none) return (p->data.ull) ? false : true;
	if (p->type == UdataType::bool_b) return (p->data.b) ? false : true;
	if (p->type == UdataType::char_c) return (p->data.c) ? false : true;
	if (p->type == UdataType::unsigned_char_uc) return (p->data.uc) ? false : true;
	if (p->type == UdataType::wchart_wc) return (p->data.wc) ? false : true;
	if (p->type == UdataType::short_s) return (p->data.s) ? false : true;
	if (p->type == UdataType::unsigned_short_us) return (p->data.us) ? false : true;
	if (p->type == UdataType::int_i) return (p->data.i) ? false : true;
	if (p->type == UdataType::unsigned_int_ui) return (p->data.ui) ? false : true;
	if (p->type == UdataType::long_l) return (p->data.l) ? false : true;
	if (p->type == UdataType::unsigned_long_ul) return (p->data.ul) ? false : true;
	if (p->type == UdataType::long_long_ll) return (p->data.ll) ? false : true;
	if (p->type == UdataType::unsigned_long_long_ull) return (p->data.ull) ? false : true;
	if (p->type == UdataType::float_f) return (p->data.f) ? false : true;
	if (p->type == UdataType::double_d) return (p->data.d) ? false : true;
	if (p->type == UdataType::void_p) return (*(char*)p->data.p) ? false : true;
	if (p->type == UdataType::char_cp) return (*p->data.cp) ? false : true;
	if (p->type == UdataType::unsigned_char_ucp) return (*p->data.ucp) ? false : true;
	if (p->type == UdataType::wchart_wcp) return (*p->data.wcp) ? false : true;
	if (p->type == UdataType::short_sp) return (*p->data.sp) ? false : true;
	if (p->type == UdataType::unsigned_short_usp) return (*p->data.usp) ? false : true;
	if (p->type == UdataType::int_ip) return (*p->data.ip) ? false : true;
	if (p->type == UdataType::unsigned_int_uip) return (*p->data.uip) ? false : true;
	if (p->type == UdataType::long_lp) return (*p->data.lp) ? false : true;
	if (p->type == UdataType::unsigned_long_ulp) return (*p->data.ulp) ? false : true;
	if (p->type == UdataType::long_long_llp) return (*p->data.llp) ? false : true;
	if (p->type == UdataType::unsigned_long_long_ullp) return (*p->data.ullp) ? false : true;
	if (p->type == UdataType::float_fp) return (*p->data.fp) ? false : true;
	if (p->type == UdataType::double_dp) return (*p->data.dp) ? false : true;
	//if (p->type == UdataType::std_string_ss) return (p->data.ss)?false:true;
	//if (p->type == UdataType::std_wstring_sws) return (p->data.sws)?false:true;
	return (p->data.ull) ? false : true;
}
void Udata::set(char c, int len)
{
	this->data.c = c;
	this->type = UdataType::char_c; 
	this->len = len;
}
void Udata::set(unsigned char uc, int len)
{
	this->data.uc = uc;
	this->type = UdataType::unsigned_char_uc; 
	this->len = len;
}
void Udata::set(wchar_t wc, int len)
{
	this->data.wc = wc;
	this->type = UdataType::wchart_wc; 
	this->len = len;
}
void Udata::set(short s, int len)
{
	this->data.s = s;
	this->type = UdataType::short_s; 
	this->len = len;
}
void Udata::set(unsigned short us, int len)
{
	this->data.us = us;
	this->type = UdataType::unsigned_short_us; 
	this->len = len;
}
void Udata::set(int i, int len)
{
	this->data.i = i;
	this->type = UdataType::int_i; 
	this->len = len;
}
void Udata::set(unsigned int ui, int len)
{
	this->data.ui = ui;
	this->type = UdataType::unsigned_int_ui; 
	this->len = len;
}
void Udata::set(long l, int len)
{
	this->data.l = l;
	this->type = UdataType::long_l; 
	this->len = len;
}
void Udata::set(unsigned long ul, int len)
{
	this->data.ul = ul;
	this->type = UdataType::unsigned_long_ul; 
	this->len = len;
}
void Udata::set(long long ll, int len)
{
	this->data.ll = ll;
	this->type = UdataType::long_long_ll; 
	this->len = len;
}
void Udata::set(unsigned long long ull, int len)
{
	this->data.ull = ull;
	this->type = UdataType::unsigned_long_long_ull; 
	this->len = len;
}
void Udata::set(float f, int len)
{
	this->data.f = f;
	this->type = UdataType::float_f; 
	this->len = len;
}
void Udata::set(double d, int len)
{
	this->data.d = d;
	this->type = UdataType::double_d; 
	this->len = len;
}
void Udata::set(void * p, int len)
{
	this->data.p = p;
	this->type = UdataType::void_p;
	this->len = len;
}
void Udata::set(char *cp, int len)
{
	this->data.cp = cp;
	this->type = UdataType::char_cp;
	this->len = len;
}
void Udata::set(unsigned char* ucp, int len)
{
	this->data.ucp = ucp;
	this->type = UdataType::unsigned_char_ucp;
	this->len = len;
}
void Udata::set(wchar_t *wcp, int len)
{
	this->data.wcp = wcp;
	this->type = UdataType::wchart_wcp;
	this->len = len;
}
void Udata::set(short * sp, int len)
{
	this->data.sp = sp;
	this->type = UdataType::short_sp;
	this->len = len;
}
void Udata::set(unsigned short * usp, int len)
{
	this->data.usp = usp;
	this->type = UdataType::unsigned_short_usp;
	this->len = len;
}
void Udata::set(int *ip, int len)
{
	this->data.ip = ip;
	this->type = UdataType::int_ip;
	this->len = len;
}
void Udata::set(unsigned int *uip, int len)
{
	this->data.uip = uip;
	this->type = UdataType::unsigned_int_uip;
	this->len = len;
}
void Udata::set(long *lp, int len)
{
	this->data.lp = lp;
	this->type = UdataType::long_lp;
	this->len = len;
}
void Udata::set(unsigned long *ulp, int len)
{
	this->data.ulp = ulp;
	this->type = UdataType::unsigned_long_ulp;
	this->len = len;
}
void Udata::set(long long *llp, int len)
{
	this->data.llp = llp;
	this->type = UdataType::long_long_llp;
	this->len = len;
}
void Udata::set(unsigned long long *ullp, int len)
{
	this->data.ullp = ullp;
	this->type = UdataType::unsigned_long_long_ullp;
	this->len = len;
}
void Udata::set(float *fp, int len)
{
	this->data.fp = fp;
	this->type = UdataType::float_fp;
	this->len = len;
}
void Udata::set(double *dp, int len)
{
	this->data.dp = dp;
	this->type = UdataType::double_dp;
	this->len = len;
}
void Udata::set(std::string *ss, int len)
{
	this->data.ss = ss;
	this->type = UdataType::std_string_ss;
	this->len = len;
}
void Udata::set(std::wstring *sws, int len)
{
	this->data.sws = sws;
	this->type = UdataType::std_wstring_sws;
	this->len = len;
}
void Udata::set(Udata *p, int len)
{
	this->type = p->type;
	this->data = p->data;
	this->len = len;
}
void Udata::set(u_data *p, int len)
{
	this->data = *p;
	this->len = len;
}

void Udata::set(void* start, void* end)
{
	if(end>=start)
	{
		this->data.buffer.start = start;
		this->data.buffer.end = end;
		this->len = (char*)end - (char*)start; //end > start
	}
	else //if(end < start>  //swap start and end 
	{
		this->data.buffer.start = end;
		this->data.buffer.end = start;
		this->len = (char*)start - (char*)end; //end < start
	}
	this->type = UdataType::buffer;
}

void Udata::set(data_buffer buffer)
{
	this->set(buffer.start, buffer.end);
}

void Udata::set(data_buffer* p_buf)
{
	this->set(p_buf->start, p_buf->end);
}

//get
int Udata::get(char * c)
{
	*c = this->data.c; return this->len;
}
int Udata::get(unsigned char * uc)
{
	*uc = this->data.uc; return this->len;
}
int Udata::get(wchar_t * wc)
{
	*wc = this->data.wc; return this->len;
}
int Udata::get(short * s)
{
	*s = this->data.s; return this->len;
}
int Udata::get(unsigned short * us)
{
	*us = this->data.us; return this->len;
}
int Udata::get(int * i)
{
	*i = this->data.i; return this->len;
}
int Udata::get(unsigned int * ui)
{
	*ui = this->data.ui; return this->len;
}
int Udata::get(long * l)
{
	*l = this->data.l; return this->len;
}
int Udata::get(unsigned long * ul)
{
	*ul = this->data.ul; return this->len;
}
int Udata::get(long long * ll)
{
	*ll = this->data.ll; return this->len;
}
int Udata::get(unsigned long long * ull)
{
	*ull = this->data.ull; return this->len;
}
int Udata::get(float * f)
{
	*f = this->data.f; return this->len;
}
int Udata::get(double * d)
{
	*d = this->data.d; return this->len;
}
int Udata::get(void * * p)
{
	*p = this->data.p; return this->len;
}
int Udata::get(char * *cp)
{
	*cp = this->data.cp; return this->len;
}
int Udata::get(unsigned char* * ucp)
{
	*ucp = this->data.ucp; return this->len;
}
int Udata::get(wchar_t * *wcp)
{
	*wcp = this->data.wcp; return this->len;
}
int Udata::get(short * * sp)
{
	*sp = this->data.sp; return this->len;
}
int Udata::get(unsigned short * * usp)
{
	*usp = this->data.usp; return this->len;
}
int Udata::get(int * *ip)
{
	*ip = this->data.ip; return this->len;
}
int Udata::get(unsigned int * *uip)
{
	*uip = this->data.uip; return this->len;
}
int Udata::get(long * *lp)
{
	*lp = this->data.lp; return this->len;
}
int Udata::get(unsigned long * *ulp)
{
	*ulp = this->data.ulp; return this->len;
}
int Udata::get(long long * *llp)
{
	*llp = this->data.llp; return this->len;
}
int Udata::get(unsigned long long * *ullp)
{
	*ullp = this->data.ullp; return this->len;
}
int Udata::get(float * *fp)
{
	*fp = this->data.fp; return this->len;
}
int Udata::get(double * *dp)
{
	*dp = this->data.dp; return this->len;
}
int Udata::get(std::string * *ss)
{
	*ss = this->data.ss; return this->len;
}
int Udata::get(std::wstring * *sws)
{
	*sws = this->data.sws; return this->len;
}

int Udata::get(void** start, void** end)
{
	*start = this->data.buffer.start;
	*end = this->data.buffer.end;
	return this->len;
}

int Udata::get(data_buffer* p_buffer)
{
	p_buffer->start = this->data.buffer.start;
	p_buffer->end = this->data.buffer.end;
	return this->len;
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

T_TYPE int Udata::cmp_t(T a, T b, int len_a, int len_b)
{
	int len = (len_a > len_b) ? len_b : len_a;
	if (--len) { OUT_ERROR return 2; }
	for (; len > 0; len--)
	{
		if(a[len]>b[len]) return 1;
		if(a[len]<b[len]) return -1;
	}
	if (len_a == len_b) 	return 0;
	return (len_a > len_b) ? 1 : -1;
}

int Udata::cmp(char *cp, int len)
{
	return this->cmp_t(this->data.cp, cp, this->len, len);
}
int Udata::cmp(unsigned char* ucp, int len)
{
	return this->cmp_t(this->data.ucp, ucp, this->len, len);
}
int Udata::cmp(wchar_t *wcp, int len)
{
	return this->cmp_t(this->data.wcp, wcp, this->len, len);
}
int Udata::cmp(short * sp, int len)
{
	return this->cmp_t(this->data.sp, sp, this->len, len);
}
int Udata::cmp(unsigned short * usp, int len)
{
	return this->cmp_t(this->data.usp, usp, this->len, len);
}
int Udata::cmp(int *ip, int len)
{
	return this->cmp_t(this->data.ip, ip, this->len, len);
}
int Udata::cmp(unsigned int *uip, int len)
{
	return this->cmp_t(this->data.uip, uip, this->len, len);
}
int Udata::cmp(long *lp, int len)
{
	return this->cmp_t(this->data.lp, lp, this->len, len);
}
int Udata::cmp(unsigned long *ulp, int len)
{
	return this->cmp_t(this->data.ulp, ulp, this->len, len);
}
int Udata::cmp(long long *llp, int len)
{
	return this->cmp_t(this->data.llp, llp, this->len, len);
}
int Udata::cmp(unsigned long long *ullp, int len)
{
	return this->cmp_t(this->data.ullp, ullp, this->len, len);
}
int Udata::cmp(float *fp, int len)
{
	return this->cmp_t(this->data.fp, fp, this->len, len);
}
int Udata::cmp(double *dp, int len)
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
	return this->cmp_t((unsigned char*)&this->data, (unsigned char*)&p->data,this->len, (int)sizeof(u_data));
}
int Udata::cmp(u_data *p)
{
	return this->cmp_t((unsigned char*)&this->data,(unsigned char*) p, this->len, (int)sizeof(u_data));
}

T_TYPE bool Udata::and_t(T a, T b, int len_a, int len_b)
{
	int len = (len_a > len_b) ? len_b : len_a;
	if (--len < 0) { OUT_ERROR return false; }
	for (; len > 0; len--)
	{
		if (a[len]&&b[len]) continue;
		return false;
	}
	if((len_a != len_b)) return false;
	return true;
}
bool Udata:: and_(bool b)
{
	return (this->data.b&&b);
}
bool Udata:: and_(char c)
{
	return (this->data.c&&c);
}
bool Udata:: and_(unsigned char uc)
{
	return (this->data.uc&&uc);
}
bool Udata:: and_(wchar_t wc)
{
	return (this->data.wc&&wc);
}
bool Udata:: and_(short s)
{
	return (this->data.s&&s);
}
bool Udata:: and_(unsigned short us)
{
	return (this->data.us&&us);
}
bool Udata:: and_(int i)
{
	return (this->data.i&&i);
}
bool Udata:: and_(unsigned int ui)
{
	return (this->data.ui&&ui);
}
bool Udata:: and_(long l)
{
	return (this->data.l&&l);
}
bool Udata:: and_(unsigned long ul)
{
	return (this->data.ul&&ul);
}
bool Udata:: and_(long long ll)
{
	return (this->data.ll&&ll);
}
bool Udata:: and_(unsigned long long ull)
{
	return (this->data.ull&&ull);
}
bool Udata:: and_(float f)
{
	return (this->data.f&&f);
}
bool Udata:: and_(double d)
{
	return (this->data.d&&d);
}
bool Udata:: and_(void * p)
{
	return (this->data.p&&p);
}
bool Udata:: and_(char *cp, int len)
{
	return this->and_t(this->data.cp,cp,this->len,len);
}
bool Udata:: and_(unsigned char* ucp, int len)
{
	return this->and_t(this->data.ucp, ucp, this->len, len);
}
bool Udata:: and_(wchar_t *wcp, int len)
{
	return this->and_t(this->data.wcp, wcp, this->len, len);
}
bool Udata:: and_(short * sp, int len)
{
	return this->and_t(this->data.sp, sp, this->len, len);
}
bool Udata:: and_(unsigned short * usp, int len)
{
	return this->and_t(this->data.usp, usp, this->len, len);
}
bool Udata:: and_(int *ip, int len)
{
	return this->and_t(this->data.ip, ip, this->len, len);
}
bool Udata:: and_(unsigned int *uip, int len)
{
	return this->and_t(this->data.uip, uip, this->len, len);
}
bool Udata:: and_(long *lp, int len)
{
	return this->and_t(this->data.lp, lp, this->len, len);
}
bool Udata:: and_(unsigned long *ulp, int len)
{
	return this->and_t(this->data.ulp, ulp, this->len, len);
}
bool Udata:: and_(long long *llp, int len)
{
	return this->and_t(this->data.llp, llp, this->len, len);
}
bool Udata:: and_(unsigned long long *ullp, int len)
{
	return this->and_t(this->data.ullp, ullp, this->len, len);
}
bool Udata:: and_(float *fp, int len)
{
	return this->and_t(this->data.fp, fp, this->len, len);
}
bool Udata:: and_(double *dp, int len)
{
	return this->and_t(this->data.dp, dp, this->len, len);
}
bool Udata:: and_(std::string *ss)
{
	return (*this->data.ss==*ss);
}
bool Udata:: and_(std::wstring *sws)
{
	return (*this->data.sws == *sws);
}
bool Udata:: and_(Udata *p) //use ull
{
	return (this->data.ull&&p->data.ull);
}
bool Udata:: and_(u_data *p)//use ull
{
	return (this->data.ull&&p->ull);
}
T_TYPE bool Udata::or_t(T a, T b, int len_a, int len_b)
{
	int len = (len_a > len_b) ? len_b : len_a;
	if (--len < 0) { OUT_ERROR return false; }
	for (; len > 0; len--)
	{
		if (a[len] || b[len]) continue;
		return false;
	}
	if ((len_a != len_b)) return false;
	return true;
}
bool Udata:: or_(bool b)
{
	return (this->data.b || b);
}
bool Udata:: or_(char c)
{
	return (this->data.c || c);
}
bool Udata:: or_(unsigned char uc)
{
	return (this->data.uc || uc);
}
bool Udata:: or_(wchar_t wc)
{
	return (this->data.wc || wc);
}
bool Udata:: or_(short s)
{
	return (this->data.s || s);
}
bool Udata:: or_(unsigned short us)
{
	return (this->data.us || us);
}
bool Udata:: or_(int i)
{
	return (this->data.i || i);
}
bool Udata:: or_(unsigned int ui)
{
	return (this->data.ui || ui);
}
bool Udata:: or_(long l)
{
	return (this->data.l || l);
}
bool Udata:: or_(unsigned long ul)
{
	return (this->data.ul || ul);
}
bool Udata:: or_(long long ll)
{
	return (this->data.ll || ll);
}
bool Udata:: or_(unsigned long long ull)
{
	return (this->data.ull || ull);
}
bool Udata:: or_(float f)
{
	return (this->data.f || f);
}
bool Udata:: or_(double d)
{
	return (this->data.d || d);
}
bool Udata:: or_(void * p)
{
	return (this->data.p || p);
}
bool Udata:: or_(char *cp, int len)
{
	return this->or_t(this->data.cp, cp, this->len, len);
}
bool Udata:: or_(unsigned char* ucp, int len)
{
	return this->or_t(this->data.ucp, ucp, this->len, len);
}
bool Udata:: or_(wchar_t *wcp, int len)
{
	return this->or_t(this->data.wcp, wcp, this->len, len);
}
bool Udata:: or_(short * sp, int len)
{
	return this->or_t(this->data.sp, sp, this->len, len);
}
bool Udata:: or_(unsigned short * usp, int len)
{
	return this->or_t(this->data.usp, usp, this->len, len);
}
bool Udata:: or_(int *ip, int len)
{
	return this->or_t(this->data.ip, ip, this->len, len);
}
bool Udata:: or_(unsigned int *uip, int len)
{
	return this->or_t(this->data.uip, uip, this->len, len);
}
bool Udata:: or_(long *lp, int len)
{
	return this->or_t(this->data.lp, lp, this->len, len);
}
bool Udata:: or_(unsigned long *ulp, int len)
{
	return this->or_t(this->data.ulp, ulp, this->len, len);
}
bool Udata:: or_(long long *llp, int len)
{
	return this->or_t(this->data.llp, llp, this->len, len);
}
bool Udata:: or_(unsigned long long *ullp, int len)
{
	return this->or_t(this->data.ullp, ullp, this->len, len);
}
bool Udata:: or_(float *fp, int len)
{
	return this->or_t(this->data.fp, fp, this->len, len);
}
bool Udata:: or_(double *dp, int len)
{
	return this->or_t(this->data.dp, dp, this->len, len);
}
bool Udata:: or_(std::string *ss)
{
	return (*this->data.ss == *ss);
}
bool Udata:: or_(std::wstring *sws)
{
	return (*this->data.sws == *sws);
}
bool Udata:: or_(Udata *p) //use ull
{
	return (this->data.ull || p->data.ull);
}
bool Udata:: or_(u_data *p)//use ull
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
