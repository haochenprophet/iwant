#ifndef DATA_H 
#define DATA_H

#include <ctype.h>
#include <string.h>
#include <string>
#include "object_def.h"

namespace n_data {

	typedef union union_data
	{
		bool b;
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
		none=0,
		bool_b,
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

	class CdataTypeToken
	{
	public:
		UdataType type;
		char * token;
	public:
		UdataType isme(char * token=nullptr);
	};

	class Udata
	{
	public:
		UdataType type;
		u_data data;
		size_t len;//for typename bufer []or * point len
	public:
		Udata() { this->data.ull = 0; this->type = UdataType::none; this->len = 1; }
		virtual int runme(void * myname, Udata *p);//
		void set_by_type(Udata *p);
		size_t get_by_type(Udata *p);
		int cmp_by_type(Udata *p);
		bool and_by_type(Udata *p);
		bool or_by_type(Udata *p);
		//sets
		void set(bool b, size_t len = 1) { this->data.b = b; this->type= UdataType::bool_b; this->len = len;}
		void set(char c, size_t len = 1);
		void set(unsigned char uc, size_t len = 1);
		void set(wchar_t wc, size_t len = 1);
		void set(short s, size_t len = 1);
		void set(unsigned short us, size_t len = 1);
		void set(int i, size_t len = 1);
		void set(unsigned int ui, size_t len = 1);
		void set(long l, size_t len = 1);
		void set(unsigned long ul, size_t len = 1);
		void set(long long ll, size_t len = 1);
		void set(unsigned long long ull, size_t len = 1);
		void set(float f, size_t len = 1);
		void set(double d, size_t len = 1);
		void set(void * p, size_t len = 1);
		void set(char *cp, size_t len = 1);
		void set(unsigned char* ucp, size_t len = 1);
		void set(wchar_t *wcp, size_t len = 1);
		void set(short * sp, size_t len = 1);
		void set(unsigned short * usp, size_t len = 1);
		void set(int *ip, size_t len = 1);
		void set(unsigned int *uip, size_t len = 1);
		void set(long *lp, size_t len = 1);
		void set(unsigned long *ulp, size_t len = 1);
		void set(long long *llp, size_t len = 1);
		void set(unsigned long long *ullp, size_t len = 1);
		void set(float *fp, size_t len = 1);
		void set(double *dp, size_t len = 1);
		void set(std::string *ss, size_t len = 1);
		void set(std::wstring *sws, size_t len = 1);
		void set(Udata *p, size_t len = 1);
		void set(u_data *p, size_t len = 1);
		//operator =
		Udata& operator =(bool d) { this->set(d); }
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
		size_t get(bool * b) { *b = this->data.b; return this->len; }
		size_t get(char * c);
		size_t get(unsigned char * uc);
		size_t get(wchar_t * wc);
		size_t get(short * s);
		size_t get(unsigned short * us);
		size_t get(int * i);
		size_t get(unsigned int * ui);
		size_t get(long * l);
		size_t get(unsigned long * ul);
		size_t get(long long * ll);
		size_t get(unsigned long long * ull);
		size_t get(float * f);
		size_t get(double * d);
		size_t get(void * * p);
		size_t get(char * *cp);
		size_t get(unsigned char* * ucp);
		size_t get(wchar_t * *wcp);
		size_t get(short * * sp);
		size_t get(unsigned short * * usp);
		size_t get(int * *ip);
		size_t get(unsigned int * *uip);
		size_t get(long * *lp);
		size_t get(unsigned long * *ulp);
		size_t get(long long * *llp);
		size_t get(unsigned long long * *ullp);
		size_t get(float * *fp);
		size_t get(double * *dp);
		size_t get(std::string * *ss);
		size_t get(std::wstring * *sws);
		//compare
		T_TYPE int cmp_t(T a, T b, size_t len_a=1, size_t len_b=1);
		int cmp(bool b) { if (this->data.b == b) return 0; return (this->data.b > b) ? 1 : 0; }
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
		bool operator ==(bool d) { return (0 == this->cmp(d)); }
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
		bool operator !=(bool d) { return (0 != this->cmp(d)); }
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
		bool operator <(bool d) { return (-1 == this->cmp(d)); }
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
		bool operator <=(bool d) { return (0 >= this->cmp(d)); }
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
		bool operator >(bool d) { return (1 == this->cmp(d)); }
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
		bool operator >=(bool d) { int ret = this->cmp(d); return (ret == 1 || ret == 0); }
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
		//and &&
		T_TYPE bool and_t(T a, T b, size_t len_a = 1, size_t len_b = 1);
		bool and(bool b);
		bool and(char c);
		bool and(unsigned char uc);
		bool and(wchar_t wc);
		bool and(short s);
		bool and(unsigned short us);
		bool and(int i);
		bool and(unsigned int ui);
		bool and(long l);
		bool and(unsigned long ul);
		bool and(long long ll);
		bool and(unsigned long long ull);
		bool and(float f);
		bool and(double d);
		bool and(void * p);
		bool and(char *cp, size_t len = 1);
		bool and(unsigned char* ucp, size_t len = 1);
		bool and(wchar_t *wcp, size_t len = 1);
		bool and(short * sp, size_t len = 1);
		bool and(unsigned short * usp, size_t len = 1);
		bool and(int *ip, size_t len = 1);
		bool and(unsigned int *uip, size_t len = 1);
		bool and(long *lp, size_t len = 1);
		bool and(unsigned long *ulp, size_t len = 1);
		bool and(long long *llp, size_t len = 1);
		bool and(unsigned long long *ullp, size_t len = 1);
		bool and(float *fp, size_t len = 1);
		bool and(double *dp, size_t len = 1);
		bool and(std::string *ss);
		bool and(std::wstring *sws);
		bool and(Udata *p);
		bool and(u_data *p);
		//operator &&
		bool operator &&(bool d) { return this-> and (d); }
		bool operator &&(char d) { return this-> and (d); }
		bool operator &&(unsigned char d) { return this-> and (d); }
		bool operator &&(wchar_t d) { return this-> and (d); }
		bool operator &&(short d) { return this-> and (d); }
		bool operator &&(unsigned short d) { return this-> and (d); }
		bool operator &&(int d) { return this-> and (d); }
		bool operator &&(unsigned int d) { return this-> and (d); }
		bool operator &&(long d) { return this-> and (d); }
		bool operator &&(unsigned long d) { return this-> and (d); }
		bool operator &&(long long d) { return this-> and (d); }
		bool operator &&(unsigned long long d) { return this-> and (d); }
		bool operator &&(float d) { return this-> and (d); }
		bool operator &&(double d) { return this-> and (d); }
		bool operator &&(void * d) { return this-> and (d); }
		bool operator &&(char *d) { return this-> and (d); }
		bool operator &&(unsigned char* d) { return this-> and (d); }
		bool operator &&(wchar_t *d) { return this-> and (d); }
		bool operator &&(short * d) { return this-> and (d); }
		bool operator &&(unsigned short * d) { return this-> and (d); }
		bool operator &&(int *d) { return this-> and (d); }
		bool operator &&(unsigned int *d) { return this-> and (d); }
		bool operator &&(long *d) { return this-> and (d); }
		bool operator &&(unsigned long *d) { return this-> and (d); }
		bool operator &&(long long *d) { return this-> and (d); }
		bool operator &&(unsigned long long *d) { return this-> and (d); }
		bool operator &&(float *d) { return this-> and (d); }
		bool operator &&(double *d) { return this-> and (d); }
		bool operator &&(std::string *d) { return this-> and (d); }
		bool operator &&(std::wstring *d) { return this-> and (d); }
		bool operator &&(Udata *d) { return this-> and (d); }
		bool operator &&(u_data*d) { return this-> and (d); }
		//or ||
		T_TYPE bool or_t(T a, T b, size_t len_a = 1, size_t len_b = 1);
		bool or (bool b);
		bool or (char c);
		bool or (unsigned char uc);
		bool or (wchar_t wc);
		bool or (short s);
		bool or (unsigned short us);
		bool or (int i);
		bool or (unsigned int ui);
		bool or (long l);
		bool or (unsigned long ul);
		bool or (long long ll);
		bool or (unsigned long long ull);
		bool or (float f);
		bool or (double d);
		bool or (void * p);
		bool or (char *cp, size_t len = 1);
		bool or (unsigned char* ucp, size_t len = 1);
		bool or (wchar_t *wcp, size_t len = 1);
		bool or (short * sp, size_t len = 1);
		bool or (unsigned short * usp, size_t len = 1);
		bool or (int *ip, size_t len = 1);
		bool or (unsigned int *uip, size_t len = 1);
		bool or (long *lp, size_t len = 1);
		bool or (unsigned long *ulp, size_t len = 1);
		bool or (long long *llp, size_t len = 1);
		bool or (unsigned long long *ullp, size_t len = 1);
		bool or (float *fp, size_t len = 1);
		bool or (double *dp, size_t len = 1);
		bool or (std::string *ss);
		bool or (std::wstring *sws);
		bool or (Udata *p);
		bool or (u_data *p);
		//operator ||
		bool operator ||(bool d) { return this-> or (d); }
		bool operator ||(char d) { return this-> or (d); }
		bool operator ||(unsigned char d) { return this-> or (d); }
		bool operator ||(wchar_t d) { return this-> or (d); }
		bool operator ||(short d) { return this-> or (d); }
		bool operator ||(unsigned short d) { return this-> or (d); }
		bool operator ||(int d) { return this-> or (d); }
		bool operator ||(unsigned int d) { return this-> or (d); }
		bool operator ||(long d) { return this-> or (d); }
		bool operator ||(unsigned long d) { return this-> or (d); }
		bool operator ||(long long d) { return this-> or (d); }
		bool operator ||(unsigned long long d) { return this-> or (d); }
		bool operator ||(float d) { return this-> or (d); }
		bool operator ||(double d) { return this-> or (d); }
		bool operator ||(void * d) { return this-> or (d); }
		bool operator ||(char *d) { return this-> or (d); }
		bool operator ||(unsigned char* d) { return this-> or (d); }
		bool operator ||(wchar_t *d) { return this-> or (d); }
		bool operator ||(short * d) { return this-> or (d); }
		bool operator ||(unsigned short * d) { return this-> or (d); }
		bool operator ||(int *d) { return this-> or (d); }
		bool operator ||(unsigned int *d) { return this-> or (d); }
		bool operator ||(long *d) { return this-> or (d); }
		bool operator ||(unsigned long *d) { return this-> or (d); }
		bool operator ||(long long *d) { return this-> or (d); }
		bool operator ||(unsigned long long *d) { return this-> or (d); }
		bool operator ||(float *d) { return this-> or (d); }
		bool operator ||(double *d) { return this-> or (d); }
		bool operator ||(std::string *d) { return this-> or (d); }
		bool operator ||(std::wstring *d) { return this-> or (d); }
		bool operator ||(Udata *d) { return this-> or (d); }
		bool operator ||(u_data*d) { return this-> or (d); }
	};
}
using namespace n_data;

#endif