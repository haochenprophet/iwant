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
#if DATA_TEST

int main(int argc, char *argv[])
{
	std::cout<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<"\n";

	Udata data;
	std::cout<<data.data.ull<<endl;

	return 0;
}
#endif