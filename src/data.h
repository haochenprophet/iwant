#ifndef DATA_H 
#define DATA_H
#include <string>
#include "object_def.h"

namespace n_data {

	typedef union union_data
	{
		char c;
		unsigned char uc;
		wchar_t wc;
		short s;
		unsigned short us;
		int i;
		unsigned int ui;
		long l;
		unsigned long ul;
		long long ll;
		unsigned long long ull;
		float f;
		double d;
		void * p;
		char *cp;
		unsigned char* ucp;
		wchar_t *wcp;
		short * sp;
		unsigned short * usp;
		int *ip;
		unsigned int *uip;
		long *lp;
		unsigned long *ulp;
		long long *llp;
		unsigned long long *ullp;
		float *fp;
		double *dp;
		std::string *ss;
		std::wstring *sws;
	}u_data;

	enum class UdataType{
		none,
		char_c,
		unsigned_char_uc,
		wchart_wc,
		short_s,
		unsigned_short_us,
		int_i,
		unsigned_int_ui,
		long_l,
		unsigned_long_ul,
		long_long_ll,
		unsigned_long_long_ull,
		float_f,
		double_d,
		void_p,
		char_cp,
		unsigned_char_ucp,
		wchart_wcp,
		short_sp,
		unsigned_short_usp,
		int_ip,
		unsigned_int_uip,
		long_lp,
		unsigned_long_ulp,
		long_long_llp,
		unsigned_long_long_ullp,
		float_fp,
		double_dp,
		std_string_ss,
		std_wstring_sws,
	};

	class Udata
	{
	public:
		UdataType type;
		u_data data;
	public:
		Udata() { this->data.ull = 0; this->type=UdataType::none;}
		void set(char c);
		void set(unsigned char uc);
		void set(wchar_t wc);
		void set(short s);
		void set(unsigned short us);
		void set(int i);
		void set(unsigned int ui);
		void set(long l);
		void set(unsigned long ul);
		void set(long long ll);
		void set(unsigned long long ull);
		void set(float f);
		void set(double d);
		void set(void * p);
		void set(char *cp);
		void set(unsigned char* ucp);
		void set(wchar_t *wcp);
		void set(short * sp);
		void set(unsigned short * usp);
		void set(int *ip);
		void set(unsigned int *uip);
		void set(long *lp);
		void set(unsigned long *ulp);
		void set(long long *llp);
		void set(unsigned long long *ullp);
		void set(float *fp);
		void set(double *dp);
		void set(std::string *ss);
		void set(std::wstring *sws);
		void set(Udata *p);
		void set(u_data *p);
		//operator =
		Udata& operator =(char d) { this->set(d); }
		Udata& operator =(unsigned char d) { this->set(d); }
		Udata& operator =(wchar_t d) { this->set(d); }
		Udata& operator =(short d) { this->set(d); }
		Udata& operator =(unsigned short d) { this->set(d); }
		Udata& operator =(int d) { this->set(d); }
		Udata& operator =(unsigned int d) { this->set(d); }
		Udata& operator =(long d) { this->set(d); }
		Udata& operator =(unsigned long d) { this->set(d); }
		Udata& operator =(long long d) { this->set(d); }
		Udata& operator =(unsigned long long d) { this->set(d); }
		Udata& operator =(float d) { this->set(d); }
		Udata& operator =(double d) { this->set(d); }
		Udata& operator =(void * d) { this->set(d); }
		Udata& operator =(char *d) { this->set(d); }
		Udata& operator =(unsigned char* d) { this->set(d); }
		Udata& operator =(wchar_t *d) { this->set(d); }
		Udata& operator =(short * d) { this->set(d); }
		Udata& operator =(unsigned short * d) { this->set(d); }
		Udata& operator =(int *d) { this->set(d); }
		Udata& operator =(unsigned int *d) { this->set(d); }
		Udata& operator =(long *d) { this->set(d); }
		Udata& operator =(unsigned long *d) { this->set(d); }
		Udata& operator =(long long *d) { this->set(d); }
		Udata& operator =(unsigned long long *d) { this->set(d); }
		Udata& operator =(float *d) { this->set(d); }
		Udata& operator =(double *d) { this->set(d); }
		Udata& operator =(std::string *d) { this->set(d); }
		Udata& operator =(std::wstring *d) { this->set(d); }
		Udata& operator =(Udata *d) { this->set(d); }
		Udata& operator =(u_data*d) { this->set(d); }
		//get data
		void get(char * c);
		void get(unsigned char * uc);
		void get(wchar_t * wc);
		void get(short * s);
		void get(unsigned short * us);
		void get(int * i);
		void get(unsigned int * ui);
		void get(long * l);
		void get(unsigned long * ul);
		void get(long long * ll);
		void get(unsigned long long * ull);
		void get(float * f);
		void get(double * d);
		void get(void * * p);
		void get(char * *cp);
		void get(unsigned char* * ucp);
		void get(wchar_t * *wcp);
		void get(short * * sp);
		void get(unsigned short * * usp);
		void get(int * *ip);
		void get(unsigned int * *uip);
		void get(long * *lp);
		void get(unsigned long * *ulp);
		void get(long long * *llp);
		void get(unsigned long long * *ullp);
		void get(float * *fp);
		void get(double * *dp);
		void get(std::string * *ss);
		void get(std::wstring * *sws);
		//compare
		T_TYPE int cmp_t(T a, T b, size_t len = 1);
		int cmp(char c);
		int cmp(unsigned char uc);
		int cmp(wchar_t wc);
		int cmp(short s);
		int cmp(unsigned short us);
		int cmp(int i);
		int cmp(unsigned int ui);
		int cmp(long l);
		int cmp(unsigned long ul);
		int cmp(long long ll);
		int cmp(unsigned long long ull);
		int cmp(float f);
		int cmp(double d);
		int cmp(void * p);
		int cmp(char *cp,size_t len=1);
		int cmp(unsigned char* ucp, size_t len = 1);
		int cmp(wchar_t *wcp, size_t len = 1);
		int cmp(short * sp, size_t len = 1);
		int cmp(unsigned short * usp, size_t len = 1);
		int cmp(int *ip, size_t len = 1);
		int cmp(unsigned int *uip, size_t len = 1);
		int cmp(long *lp, size_t len = 1);
		int cmp(unsigned long *ulp, size_t len = 1);
		int cmp(long long *llp, size_t len = 1);
		int cmp(unsigned long long *ullp, size_t len = 1);
		int cmp(float *fp, size_t len = 1);
		int cmp(double *dp, size_t len = 1);
		int cmp(std::string *ss);
		int cmp(std::wstring *sws);
		int cmp(Udata *p);
		int cmp(u_data *p);
		//operator ==
		bool operator ==(char d) { return (0 == this->cmp(d)); }
		bool operator ==(unsigned char d) { return (0 == this->cmp(d)); }
		bool operator ==(wchar_t d) { return (0 == this->cmp(d)); }
		bool operator ==(short d) { return (0 == this->cmp(d)); }
		bool operator ==(unsigned short d) { return (0 == this->cmp(d)); }
		bool operator ==(int d) { return (0 == this->cmp(d)); }
		bool operator ==(unsigned int d) { return (0 == this->cmp(d)); }
		bool operator ==(long d) { return (0 == this->cmp(d)); }
		bool operator ==(unsigned long d) { return (0 == this->cmp(d)); }
		bool operator ==(long long d) { return (0 == this->cmp(d)); }
		bool operator ==(unsigned long long d) { return (0 == this->cmp(d)); }
		bool operator ==(float d) { return (0 == this->cmp(d)); }
		bool operator ==(double d) { return (0 == this->cmp(d)); }
		bool operator ==(void * d) { return (0 == this->cmp(d)); }
		bool operator ==(char *d) { return (0 == this->cmp(d)); }
		bool operator ==(unsigned char* d) { return (0 == this->cmp(d)); }
		bool operator ==(wchar_t *d) { return (0 == this->cmp(d)); }
		bool operator ==(short * d) { return (0 == this->cmp(d)); }
		bool operator ==(unsigned short * d) { return (0 == this->cmp(d)); }
		bool operator ==(int *d) { return (0 == this->cmp(d)); }
		bool operator ==(unsigned int *d) { return (0 == this->cmp(d)); }
		bool operator ==(long *d) { return (0 == this->cmp(d)); }
		bool operator ==(unsigned long *d) { return (0 == this->cmp(d)); }
		bool operator ==(long long *d) { return (0 == this->cmp(d)); }
		bool operator ==(unsigned long long *d) { return (0 == this->cmp(d)); }
		bool operator ==(float *d) { return (0 == this->cmp(d)); }
		bool operator ==(double *d) { return (0 == this->cmp(d)); }
		bool operator ==(std::string *d) { return (0 == this->cmp(d)); }
		bool operator ==(std::wstring *d) { return (0 == this->cmp(d)); }
		bool operator ==(Udata *d) { return (0 == this->cmp(d)); }
		bool operator ==(u_data*d) { return (0 == this->cmp(d)); }
		//operator !=
		bool operator !=(char d) { return (0 != this->cmp(d)); }
		bool operator !=(unsigned char d) { return (0 != this->cmp(d)); }
		bool operator !=(wchar_t d) { return (0 != this->cmp(d)); }
		bool operator !=(short d) { return (0 != this->cmp(d)); }
		bool operator !=(unsigned short d) { return (0 != this->cmp(d)); }
		bool operator !=(int d) { return (0 != this->cmp(d)); }
		bool operator !=(unsigned int d) { return (0 != this->cmp(d)); }
		bool operator !=(long d) { return (0 != this->cmp(d)); }
		bool operator !=(unsigned long d) { return (0 != this->cmp(d)); }
		bool operator !=(long long d) { return (0 != this->cmp(d)); }
		bool operator !=(unsigned long long d) { return (0 != this->cmp(d)); }
		bool operator !=(float d) { return (0 != this->cmp(d)); }
		bool operator !=(double d) { return (0 != this->cmp(d)); }
		bool operator !=(void * d) { return (0 != this->cmp(d)); }
		bool operator !=(char *d) { return (0 != this->cmp(d)); }
		bool operator !=(unsigned char* d) { return (0 != this->cmp(d)); }
		bool operator !=(wchar_t *d) { return (0 != this->cmp(d)); }
		bool operator !=(short * d) { return (0 != this->cmp(d)); }
		bool operator !=(unsigned short * d) { return (0 != this->cmp(d)); }
		bool operator !=(int *d) { return (0 != this->cmp(d)); }
		bool operator !=(unsigned int *d) { return (0 != this->cmp(d)); }
		bool operator !=(long *d) { return (0 != this->cmp(d)); }
		bool operator !=(unsigned long *d) { return (0 != this->cmp(d)); }
		bool operator !=(long long *d) { return (0 != this->cmp(d)); }
		bool operator !=(unsigned long long *d) { return (0 != this->cmp(d)); }
		bool operator !=(float *d) { return (0 != this->cmp(d)); }
		bool operator !=(double *d) { return (0 != this->cmp(d)); }
		bool operator !=(std::string *d) { return (0 != this->cmp(d)); }
		bool operator !=(std::wstring *d) { return (0 != this->cmp(d)); }
		bool operator !=(Udata *d) { return (0 != this->cmp(d)); }
		bool operator !=(u_data*d) { return (0 != this->cmp(d)); }
		//operator <
		bool operator <(char d) { return (-1 == this->cmp(d)); }
		bool operator <(unsigned char d) { return (-1 == this->cmp(d)); }
		bool operator <(wchar_t d) { return (-1 == this->cmp(d)); }
		bool operator <(short d) { return (-1 == this->cmp(d)); }
		bool operator <(unsigned short d) { return (-1 == this->cmp(d)); }
		bool operator <(int d) { return (-1 == this->cmp(d)); }
		bool operator <(unsigned int d) { return (-1 == this->cmp(d)); }
		bool operator <(long d) { return (-1 == this->cmp(d)); }
		bool operator <(unsigned long d) { return (-1 == this->cmp(d)); }
		bool operator <(long long d) { return (-1 == this->cmp(d)); }
		bool operator <(unsigned long long d) { return (-1 == this->cmp(d)); }
		bool operator <(float d) { return (-1 == this->cmp(d)); }
		bool operator <(double d) { return (-1 == this->cmp(d)); }
		bool operator <(void * d) { return (-1 == this->cmp(d)); }
		bool operator <(char *d) { return (-1 == this->cmp(d)); }
		bool operator <(unsigned char* d) { return (-1 == this->cmp(d)); }
		bool operator <(wchar_t *d) { return (-1 == this->cmp(d)); }
		bool operator <(short * d) { return (-1 == this->cmp(d)); }
		bool operator <(unsigned short * d) { return (-1 == this->cmp(d)); }
		bool operator <(int *d) { return (-1 == this->cmp(d)); }
		bool operator <(unsigned int *d) { return (-1 == this->cmp(d)); }
		bool operator <(long *d) { return (-1 == this->cmp(d)); }
		bool operator <(unsigned long *d) { return (-1 == this->cmp(d)); }
		bool operator <(long long *d) { return (-1 == this->cmp(d)); }
		bool operator <(unsigned long long *d) { return (-1 == this->cmp(d)); }
		bool operator <(float *d) { return (-1 == this->cmp(d)); }
		bool operator <(double *d) { return (-1 == this->cmp(d)); }
		bool operator <(std::string *d) { return (-1 == this->cmp(d)); }
		bool operator <(std::wstring *d) { return (-1 == this->cmp(d)); }
		bool operator <(Udata *d) { return (-1 == this->cmp(d)); }
		bool operator <(u_data*d) { return (-1 == this->cmp(d)); }
		//operator <=
		bool operator <=(char d) { return (0 >= this->cmp(d)); }
		bool operator <=(unsigned char d) { return (0 >= this->cmp(d)); }
		bool operator <=(wchar_t d) { return (0 >= this->cmp(d)); }
		bool operator <=(short d) { return (0 >= this->cmp(d)); }
		bool operator <=(unsigned short d) { return (0 >= this->cmp(d)); }
		bool operator <=(int d) { return (0 >= this->cmp(d)); }
		bool operator <=(unsigned int d) { return (0 >= this->cmp(d)); }
		bool operator <=(long d) { return (0 >= this->cmp(d)); }
		bool operator <=(unsigned long d) { return (0 >= this->cmp(d)); }
		bool operator <=(long long d) { return (0 >= this->cmp(d)); }
		bool operator <=(unsigned long long d) { return (0 >= this->cmp(d)); }
		bool operator <=(float d) { return (0 >= this->cmp(d)); }
		bool operator <=(double d) { return (0 >= this->cmp(d)); }
		bool operator <=(void * d) { return (0 >= this->cmp(d)); }
		bool operator <=(char *d) { return (0 >= this->cmp(d)); }
		bool operator <=(unsigned char* d) { return (0 >= this->cmp(d)); }
		bool operator <=(wchar_t *d) { return (0 >= this->cmp(d)); }
		bool operator <=(short * d) { return (0 >= this->cmp(d)); }
		bool operator <=(unsigned short * d) { return (0 >= this->cmp(d)); }
		bool operator <=(int *d) { return (0 >= this->cmp(d)); }
		bool operator <=(unsigned int *d) { return (0 >= this->cmp(d)); }
		bool operator <=(long *d) { return (0 >= this->cmp(d)); }
		bool operator <=(unsigned long *d) { return (0 >= this->cmp(d)); }
		bool operator <=(long long *d) { return (0 >= this->cmp(d)); }
		bool operator <=(unsigned long long *d) { return (0 >= this->cmp(d)); }
		bool operator <=(float *d) { return (0 >= this->cmp(d)); }
		bool operator <=(double *d) { return (0 >= this->cmp(d)); }
		bool operator <=(std::string *d) { return (0 >= this->cmp(d)); }
		bool operator <=(std::wstring *d) { return (0 >= this->cmp(d)); }
		bool operator <=(Udata *d) { return (0 >= this->cmp(d)); }
		bool operator <=(u_data*d) { return (0 >= this->cmp(d)); }
		//operator >
		bool operator >(char d) { return (1 == this->cmp(d)); }
		bool operator >(unsigned char d) { return (1 == this->cmp(d)); }
		bool operator >(wchar_t d) { return (1 == this->cmp(d)); }
		bool operator >(short d) { return (1 == this->cmp(d)); }
		bool operator >(unsigned short d) { return (1 == this->cmp(d)); }
		bool operator >(int d) { return (1 == this->cmp(d)); }
		bool operator >(unsigned int d) { return (1 == this->cmp(d)); }
		bool operator >(long d) { return (1 == this->cmp(d)); }
		bool operator >(unsigned long d) { return (1 == this->cmp(d)); }
		bool operator >(long long d) { return (1 == this->cmp(d)); }
		bool operator >(unsigned long long d) { return (1 == this->cmp(d)); }
		bool operator >(float d) { return (1 == this->cmp(d)); }
		bool operator >(double d) { return (1 == this->cmp(d)); }
		bool operator >(void * d) { return (1 == this->cmp(d)); }
		bool operator >(char *d) { return (1 == this->cmp(d)); }
		bool operator >(unsigned char* d) { return (1 == this->cmp(d)); }
		bool operator >(wchar_t *d) { return (1 == this->cmp(d)); }
		bool operator >(short * d) { return (1 == this->cmp(d)); }
		bool operator >(unsigned short * d) { return (1 == this->cmp(d)); }
		bool operator >(int *d) { return (1 == this->cmp(d)); }
		bool operator >(unsigned int *d) { return (1 == this->cmp(d)); }
		bool operator >(long *d) { return (1 == this->cmp(d)); }
		bool operator >(unsigned long *d) { return (1 == this->cmp(d)); }
		bool operator >(long long *d) { return (1 == this->cmp(d)); }
		bool operator >(unsigned long long *d) { return (1 == this->cmp(d)); }
		bool operator >(float *d) { return (1 == this->cmp(d)); }
		bool operator >(double *d) { return (1 == this->cmp(d)); }
		bool operator >(std::string *d) { return (1 == this->cmp(d)); }
		bool operator >(std::wstring *d) { return (1 == this->cmp(d)); }
		bool operator >(Udata *d) { return (1 == this->cmp(d)); }
		bool operator >(u_data*d) { return (1 == this->cmp(d)); }
		//operator >=
		bool operator >=(char d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(unsigned char d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(wchar_t d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(short d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(unsigned short d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(int d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(unsigned int d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(long d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(unsigned long d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(long long d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(unsigned long long d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(float d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(double d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(void * d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(char *d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(unsigned char* d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(wchar_t *d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(short * d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(unsigned short * d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(int *d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(unsigned int *d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(long *d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(unsigned long *d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(long long *d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(unsigned long long *d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(float *d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(double *d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(std::string *d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(std::wstring *d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(Udata *d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
		bool operator >=(u_data*d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
	};
}
using namespace n_data;

#endif