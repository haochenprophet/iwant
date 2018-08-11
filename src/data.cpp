#include "data.h"
#include "data_class.h"

Cdata::Cdata()
{
	this->name = "Cdata";
	this->alias = "data";
}

Cdata::~Cdata()
{
}
void Udata::set(char c)
{
	this->data.c = c;
	this->type = UdataType::char_c;
}
void Udata::set(unsigned char uc)
{
	this->data.uc = uc;
	this->type = UdataType::unsigned_char_uc;
}
void Udata::set(wchar_t wc)
{
	this->data.wc = wc;
	this->type = UdataType::wchart_wc;
}
void Udata::set(short s)
{
	this->data.s = s;
	this->type = UdataType::short_s;
}
void Udata::set(unsigned short us)
{
	this->data.us = us;
	this->type = UdataType::unsigned_short_us;
}
void Udata::set(int i)
{
	this->data.i = i;
	this->type = UdataType::int_i;
}
void Udata::set(unsigned int ui)
{
	this->data.ui = ui;
	this->type = UdataType::unsigned_int_ui;
}
void Udata::set(long l)
{
	this->data.l = l;
	this->type = UdataType::long_l;
}
void Udata::set(unsigned long ul)
{
	this->data.ul = ul;
	this->type = UdataType::unsigned_long_ul;
}
void Udata::set(long long ll)
{
	this->data.ll = ll;
	this->type = UdataType::long_long_ll;
}
void Udata::set(unsigned long long ull)
{
	this->data.ull = ull;
	this->type = UdataType::unsigned_long_long_ull;
}
void Udata::set(float f)
{
	this->data.f = f;
	this->type = UdataType::float_f;
}
void Udata::set(double d)
{
	this->data.d = d;
	this->type = UdataType::double_d;
}
void Udata::set(void * p)
{
	this->data.p = p;
	this->type = UdataType::void_p;
}
void Udata::set(char *cp)
{
	this->data.cp = cp;
	this->type = UdataType::char_cp;
}
void Udata::set(unsigned char* ucp)
{
	this->data.ucp = ucp;
	this->type = UdataType::unsigned_char_ucp;
}
void Udata::set(wchar_t *wcp)
{
	this->data.wcp = wcp;
	this->type = UdataType::wchart_wcp;
}
void Udata::set(short * sp)
{
	this->data.sp = sp;
	this->type = UdataType::short_sp;
}
void Udata::set(unsigned short * usp)
{
	this->data.usp = usp;
	this->type = UdataType::unsigned_short_usp;
}
void Udata::set(int *ip)
{
	this->data.ip = ip;
	this->type = UdataType::int_ip;
}
void Udata::set(unsigned int *uip)
{
	this->data.uip = uip;
	this->type = UdataType::unsigned_int_uip;
}
void Udata::set(long *lp)
{
	this->data.lp = lp;
	this->type = UdataType::long_lp;
}
void Udata::set(unsigned long *ulp)
{
	this->data.ulp = ulp;
	this->type = UdataType::unsigned_long_ulp;
}
void Udata::set(long long *llp)
{
	this->data.llp = llp;
	this->type = UdataType::long_long_llp;
}
void Udata::set(unsigned long long *ullp)
{
	this->data.ullp = ullp;
	this->type = UdataType::unsigned_long_long_ullp;
}
void Udata::set(float *fp)
{
	this->data.fp = fp;
	this->type = UdataType::float_fp;
}
void Udata::set(double *dp)
{
	this->data.dp = dp;
	this->type = UdataType::double_dp;
}
void Udata::set(std::string *ss)
{
	this->data.ss = ss;
	this->type = UdataType::std_string_ss;
}
void Udata::set(std::wstring *sws)
{
	this->data.sws = sws;
	this->type = UdataType::std_wstring_sws;
}
void Udata::get(char * c)
{
	*c = this->data.c;
}
void Udata::get(unsigned char * uc)
{
	*uc = this->data.uc;
}
void Udata::get(wchar_t * wc)
{
	*wc = this->data.wc;
}
void Udata::get(short * s)
{
	*s = this->data.s;
}
void Udata::get(unsigned short * us)
{
	*us = this->data.us;
}
void Udata::get(int * i)
{
	*i = this->data.i;
}
void Udata::get(unsigned int * ui)
{
	*ui = this->data.ui;
}
void Udata::get(long * l)
{
	*l = this->data.l;
}
void Udata::get(unsigned long * ul)
{
	*ul = this->data.ul;
}
void Udata::get(long long * ll)
{
	*ll = this->data.ll;
}
void Udata::get(unsigned long long * ull)
{
	*ull = this->data.ull;
}
void Udata::get(float * f)
{
	*f = this->data.f;
}
void Udata::get(double * d)
{
	*d = this->data.d;
}
void Udata::get(void * * p)
{
	*p = this->data.p;
}
void Udata::get(char * *cp)
{
	*cp = this->data.cp;
}
void Udata::get(unsigned char* * ucp)
{
	*ucp = this->data.ucp;
}
void Udata::get(wchar_t * *wcp)
{
	*wcp = this->data.wcp;
}
void Udata::get(short * * sp)
{
	*sp = this->data.sp;
}
void Udata::get(unsigned short * * usp)
{
	*usp = this->data.usp;
}
void Udata::get(int * *ip)
{
	*ip = this->data.ip;
}
void Udata::get(unsigned int * *uip)
{
	*uip = this->data.uip;
}
void Udata::get(long * *lp)
{
	*lp = this->data.lp;
}
void Udata::get(unsigned long * *ulp)
{
	*ulp = this->data.ulp;
}
void Udata::get(long long * *llp)
{
	*llp = this->data.llp;
}
void Udata::get(unsigned long long * *ullp)
{
	*ullp = this->data.ullp;
}
void Udata::get(float * *fp)
{
	*fp = this->data.fp;
}
void Udata::get(double * *dp)
{
	*dp = this->data.dp;
}
void Udata::get(std::string * *ss)
{
	*ss = this->data.ss;
}
void Udata::get(std::wstring * *sws)
{
	*sws = this->data.sws;
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