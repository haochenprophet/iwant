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
		int len;//for typename bufer []or * point len
	public:
		Udata() { this->data.ull = 0; this->type = UdataType::none; this->len = 1; }
		virtual int runme(void * myname, Udata *p);//
		void set_by_type(Udata *p);
		int get_by_type(Udata *p);
		int cmp_by_type(Udata *p);
		bool and_by_type(Udata *p);
		bool or_by_type(Udata *p);
		bool not_by_type(Udata *p);
		//sets
		void set(bool b, int len = 1) { this->data.b = b; this->type= UdataType::bool_b; this->len = len;}
		void set(char c, int len = 1);
		void set(unsigned char uc, int len = 1);
		void set(wchar_t wc, int len = 1);
		void set(short s, int len = 1);
		void set(unsigned short us, int len = 1);
		void set(int i, int len = 1);
		void set(unsigned int ui, int len = 1);
		void set(long l, int len = 1);
		void set(unsigned long ul, int len = 1);
		void set(long long ll, int len = 1);
		void set(unsigned long long ull, int len = 1);
		void set(float f, int len = 1);
		void set(double d, int len = 1);
		void set(void * p, int len = 1);
		void set(char *cp, int len = 1);
		void set(unsigned char* ucp, int len = 1);
		void set(wchar_t *wcp, int len = 1);
		void set(short * sp, int len = 1);
		void set(unsigned short * usp, int len = 1);
		void set(int *ip, int len = 1);
		void set(unsigned int *uip, int len = 1);
		void set(long *lp, int len = 1);
		void set(unsigned long *ulp, int len = 1);
		void set(long long *llp, int len = 1);
		void set(unsigned long long *ullp, int len = 1);
		void set(float *fp, int len = 1);
		void set(double *dp, int len = 1);
		void set(std::string *ss, int len = 1);
		void set(std::wstring *sws, int len = 1);
		void set(Udata *p, int len = 1);
		void set(u_data *p, int len = 1);
		//operator =
		void operator =(bool d) { this->set(d); }
		void operator =(char d) { this->set(d); }
		void operator =(unsigned char d) { this->set(d); }
		void operator =(wchar_t d) { this->set(d); }
		void operator =(short d) { this->set(d); }
		void operator =(unsigned short d) { this->set(d); }
		void operator =(int d) { this->set(d); }
		void operator =(unsigned int d) { this->set(d); }
		void operator =(long d) { this->set(d); }
		void operator =(unsigned long d) { this->set(d); }
		void operator =(long long d) { this->set(d); }
		void operator =(unsigned long long d) { this->set(d); }
		void operator =(float d) { this->set(d); }
		void operator =(double d) { this->set(d); }
		void operator =(void * d) { this->set(d); }
		void operator =(char *d) { this->set(d); }
		void operator =(unsigned char* d) { this->set(d); }
		void operator =(wchar_t *d) { this->set(d); }
		void operator =(short * d) { this->set(d); }
		void operator =(unsigned short * d) { this->set(d); }
		void operator =(int *d) { this->set(d); }
		void operator =(unsigned int *d) { this->set(d); }
		void operator =(long *d) { this->set(d); }
		void operator =(unsigned long *d) { this->set(d); }
		void operator =(long long *d) { this->set(d); }
		void operator =(unsigned long long *d) { this->set(d); }
		void operator =(float *d) { this->set(d); }
		void operator =(double *d) { this->set(d); }
		void operator =(std::string *d) { this->set(d); }
		void operator =(std::wstring *d) { this->set(d); }
		void operator =(Udata *d) { this->set(d); }
		void operator =(u_data*d) { this->set(d); }
		//get data
		int get(bool * b) { *b = this->data.b; return this->len; }
		int get(char * c);
		int get(unsigned char * uc);
		int get(wchar_t * wc);
		int get(short * s);
		int get(unsigned short * us);
		int get(int * i);
		int get(unsigned int * ui);
		int get(long * l);
		int get(unsigned long * ul);
		int get(long long * ll);
		int get(unsigned long long * ull);
		int get(float * f);
		int get(double * d);
		int get(void * * p);
		int get(char * *cp);
		int get(unsigned char* * ucp);
		int get(wchar_t * *wcp);
		int get(short * * sp);
		int get(unsigned short * * usp);
		int get(int * *ip);
		int get(unsigned int * *uip);
		int get(long * *lp);
		int get(unsigned long * *ulp);
		int get(long long * *llp);
		int get(unsigned long long * *ullp);
		int get(float * *fp);
		int get(double * *dp);
		int get(std::string * *ss);
		int get(std::wstring * *sws);
		//compare
		T_TYPE int cmp_t(T a, T b, int len_a=1, int len_b=1);
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
		int cmp(char *cp,int len=1);
		int cmp(unsigned char* ucp, int len = 1);
		int cmp(wchar_t *wcp, int len = 1);
		int cmp(short * sp, int len = 1);
		int cmp(unsigned short * usp, int len = 1);
		int cmp(int *ip, int len = 1);
		int cmp(unsigned int *uip, int len = 1);
		int cmp(long *lp, int len = 1);
		int cmp(unsigned long *ulp, int len = 1);
		int cmp(long long *llp, int len = 1);
		int cmp(unsigned long long *ullp, int len = 1);
		int cmp(float *fp, int len = 1);
		int cmp(double *dp, int len = 1);
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
		T_TYPE bool and_t(T a, T b, int len_a = 1, int len_b = 1);
		bool and_(bool b);
		bool and_(char c);
		bool and_(unsigned char uc);
		bool and_(wchar_t wc);
		bool and_(short s);
		bool and_(unsigned short us);
		bool and_(int i);
		bool and_(unsigned int ui);
		bool and_(long l);
		bool and_(unsigned long ul);
		bool and_(long long ll);
		bool and_(unsigned long long ull);
		bool and_(float f);
		bool and_(double d);
		bool and_(void * p);
		bool and_(char *cp, int len = 1);
		bool and_(unsigned char* ucp, int len = 1);
		bool and_(wchar_t *wcp, int len = 1);
		bool and_(short * sp, int len = 1);
		bool and_(unsigned short * usp, int len = 1);
		bool and_(int *ip, int len = 1);
		bool and_(unsigned int *uip, int len = 1);
		bool and_(long *lp, int len = 1);
		bool and_(unsigned long *ulp, int len = 1);
		bool and_(long long *llp, int len = 1);
		bool and_(unsigned long long *ullp, int len = 1);
		bool and_(float *fp, int len = 1);
		bool and_(double *dp, int len = 1);
		bool and_(std::string *ss);
		bool and_(std::wstring *sws);
		bool and_(Udata *p);
		bool and_(u_data *p);
		//operator &&
		bool operator &&(bool d) { return this-> and_ (d); }
		bool operator &&(char d) { return this-> and_ (d); }
		bool operator &&(unsigned char d) { return this-> and_ (d); }
		bool operator &&(wchar_t d) { return this-> and_ (d); }
		bool operator &&(short d) { return this-> and_ (d); }
		bool operator &&(unsigned short d) { return this-> and_ (d); }
		bool operator &&(int d) { return this-> and_ (d); }
		bool operator &&(unsigned int d) { return this-> and_ (d); }
		bool operator &&(long d) { return this-> and_ (d); }
		bool operator &&(unsigned long d) { return this-> and_ (d); }
		bool operator &&(long long d) { return this-> and_ (d); }
		bool operator &&(unsigned long long d) { return this-> and_ (d); }
		bool operator &&(float d) { return this-> and_ (d); }
		bool operator &&(double d) { return this-> and_ (d); }
		bool operator &&(void * d) { return this-> and_ (d); }
		bool operator &&(char *d) { return this-> and_ (d); }
		bool operator &&(unsigned char* d) { return this-> and_ (d); }
		bool operator &&(wchar_t *d) { return this-> and_ (d); }
		bool operator &&(short * d) { return this-> and_ (d); }
		bool operator &&(unsigned short * d) { return this-> and_ (d); }
		bool operator &&(int *d) { return this-> and_ (d); }
		bool operator &&(unsigned int *d) { return this-> and_ (d); }
		bool operator &&(long *d) { return this-> and_ (d); }
		bool operator &&(unsigned long *d) { return this-> and_ (d); }
		bool operator &&(long long *d) { return this-> and_ (d); }
		bool operator &&(unsigned long long *d) { return this-> and_ (d); }
		bool operator &&(float *d) { return this-> and_ (d); }
		bool operator &&(double *d) { return this-> and_ (d); }
		bool operator &&(std::string *d) { return this-> and_ (d); }
		bool operator &&(std::wstring *d) { return this-> and_ (d); }
		bool operator &&(Udata *d) { return this-> and_ (d); }
		bool operator &&(u_data*d) { return this-> and_ (d); }
		//or ||
		T_TYPE bool or_t(T a, T b, int len_a = 1, int len_b = 1);
		bool or_ (bool b);
		bool or_ (char c);
		bool or_ (unsigned char uc);
		bool or_ (wchar_t wc);
		bool or_ (short s);
		bool or_ (unsigned short us);
		bool or_ (int i);
		bool or_ (unsigned int ui);
		bool or_ (long l);
		bool or_ (unsigned long ul);
		bool or_ (long long ll);
		bool or_ (unsigned long long ull);
		bool or_ (float f);
		bool or_ (double d);
		bool or_ (void * p);
		bool or_ (char *cp, int len = 1);
		bool or_ (unsigned char* ucp, int len = 1);
		bool or_ (wchar_t *wcp, int len = 1);
		bool or_ (short * sp, int len = 1);
		bool or_ (unsigned short * usp, int len = 1);
		bool or_ (int *ip, int len = 1);
		bool or_ (unsigned int *uip, int len = 1);
		bool or_ (long *lp, int len = 1);
		bool or_ (unsigned long *ulp, int len = 1);
		bool or_ (long long *llp, int len = 1);
		bool or_ (unsigned long long *ullp, int len = 1);
		bool or_ (float *fp, int len = 1);
		bool or_ (double *dp, int len = 1);
		bool or_ (std::string *ss);
		bool or_ (std::wstring *sws);
		bool or_ (Udata *p);
		bool or_ (u_data *p);
		//operator ||
		bool operator ||(bool d) { return this->or_ (d); }
		bool operator ||(char d) { return this->or_ (d); }
		bool operator ||(unsigned char d) { return this->or_ (d); }
		bool operator ||(wchar_t d) { return this->or_ (d); }
		bool operator ||(short d) { return this->or_ (d); }
		bool operator ||(unsigned short d) { return this->or_ (d); }
		bool operator ||(int d) { return this->or_ (d); }
		bool operator ||(unsigned int d) { return this->or_ (d); }
		bool operator ||(long d) { return this->or_ (d); }
		bool operator ||(unsigned long d) { return this->or_ (d); }
		bool operator ||(long long d) { return this->or_ (d); }
		bool operator ||(unsigned long long d) { return this->or_ (d); }
		bool operator ||(float d) { return this->or_ (d); }
		bool operator ||(double d) { return this->or_ (d); }
		bool operator ||(void * d) { return this->or_ (d); }
		bool operator ||(char *d) { return this->or_ (d); }
		bool operator ||(unsigned char* d) { return this->or_ (d); }
		bool operator ||(wchar_t *d) { return this->or_ (d); }
		bool operator ||(short * d) { return this->or_ (d); }
		bool operator ||(unsigned short * d) { return this->or_ (d); }
		bool operator ||(int *d) { return this->or_ (d); }
		bool operator ||(unsigned int *d) { return this->or_ (d); }
		bool operator ||(long *d) { return this->or_ (d); }
		bool operator ||(unsigned long *d) { return this->or_ (d); }
		bool operator ||(long long *d) { return this->or_ (d); }
		bool operator ||(unsigned long long *d) { return this->or_ (d); }
		bool operator ||(float *d) { return this->or_ (d); }
		bool operator ||(double *d) { return this->or_ (d); }
		bool operator ||(std::string *d) { return this->or_ (d); }
		bool operator ||(std::wstring *d) { return this->or_ (d); }
		bool operator ||(Udata *d) { return this->or_ (d); }
		bool operator ||(u_data*d) { return this->or_ (d); }
		//not !
		bool not_(){return this->not_by_type(this);}
		bool operator !() { return this-> not_ (); }
	};
}
using namespace n_data;

#endif
