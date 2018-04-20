#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>
#include <fstream>
#include <thread>
#include <string>
#include <list>
#include <array>
#include <stdlib.h>     /* system, NULL, EXIT_FAILURE */
#include <string.h>
#include <time.h>       /* time_t, time */
#include <wchar.h>
#include <stack> 
#include <map>
#include <exception>

#include "temp_def.h"
#include "syntax_def.h"
#include "ex_func.h"
#include "uuid.h"
#include "bits.h"

//using namespace std; //remove fixed std::bind  conflict socket bind
using std::string;
using std::wstring;
using std::list;
using std::cout;
using std::endl;

typedef  unsigned long long ACTION_T;

enum UsingLanguage
{
	EnglishLanguage,
	SimplifiedChinese,
};

typedef int(*MyFunc)(void *p); //return <0 do nothing , ==0 success, >0 fail

int object_func(void *p);
int runcmd(void *cmd);

#define PAGE_4K	(4*1024) 
#define O_BUF_LEN PAGE_4K
#define AT_LINE cout<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<":";
#define OUT_LINE cout<<__FILE__<<"/"<<__FUNCTION__<<":line="<<__LINE__<<"\n";
#define OUT_ERROR cout<<"Error:"<<__FILE__<<"/"<<__FUNCTION__<<"/"<<__LINE__<<":"<<endl;


namespace n_object {

	class Cparameter
	{
	public:
		void *in;
		void *out;
		int size;
		std::stack<void *> s; //parameter stack
	public:
		Cparameter();
		~Cparameter();
	};

	class CtagItem //out=temp+Temp.tag->rep
	{
	public:
		string tag;
		string temp;
		string replace;
		int status;//0 :enable  1:disable ,-1:not init
	public:
		CtagItem();
		CtagItem(string tag,string temp,string replace);
		CtagItem(char* tag,char* temp,char* replace);
	};
	typedef list<CtagItem> LIST_TAGITEM;

	class Cmyfunc {
	public:
		string name; //function name
		string alias;//Alias function name
		MyFunc p_func;
		long long priority;
	public:
		Cmyfunc(string fun_name, MyFunc func);
		int isMe(char *identifier);
		int isMe(string * identifier);
		int isMe(string identifier);
		int runMe(void *p, bool new_thread=false);
	};

	typedef list<Cmyfunc> LIST_CMYFUNC;
	typedef list<void *> LIST_FAMILY;//family list type

	enum class TimelineStatus{
		now,
		past,
		future,
	};

	class Ctimeline
	{
	public:
		TimelineStatus status;
		std::multimap<void *, void *> track; //1. void * point timer , 2. void * point Object
	};
	typedef list<Ctimeline> LIST_CTIMELINE;

	class Object:public Cuuid
	{
	protected:
		long id;//object id
	public:
		int status;
		long long priority;
		ACTION_T action; //bit 0-64 or 0- max [n] for action flag 
		int error; //error count >0 error
		int count;
		int cin_buf_len;
		char *cin_buf;

		string name; //object name
		string alias;//Alias object name
		string description;
		
		//time and clock
		struct tm * tm_start,*tm_at,*tm_end;
		time_t start_time;//for class memory time
		time_t at_time;
		time_t end_time;
		clock_t start_clock;
		clock_t at_clock;
		clock_t end_clock;

		string syntax;//this for keyword object
		string temp;//keyword template 
		string s_tag;
		string s_rep;

		long locate;//0 start , -1 end , n :locate value 
		int language;
		int direction;
		int value;
		int velocity;
		
		list<void *> family;//class list
		list<void *> exist_family;//class exist other family for removeMe frome other class 。

		list<Cmyfunc> ex_func;//extern function list 
		list<CtagItem> l_tag_rule;//for tag rule 

		list<Object *> my_mem;//list for  memory address 
		list<Object *> exist_list; //for list<Object *> my_mem;  where exist me ,for remove me;
		list<Ctimeline> obj_track;//use time as key for recoder the object space track and status

		list<void *> l_url;//url list
		list<void *> l_style;//object style list
		list<void *> l_image;//object image list
		list<void *> l_audio;//object audio list
		list<void *> l_video;//object vedio list
		
		//url can be by used class Cpath
		string s_url; //Record a url string 
		string s_term;
		wstring ws_url;//Record a url wstring
		wstring ws_term;
		string s_cmd; //Record a url string 

	public:
		Object();//set object name
		~Object();//clears

		void myName(Object *o=nullptr);
		void addMe(Object *o=nullptr);//add obj to family
		void removeMe(void * item); //frome other class
		void remove_exist_family();
		void sort_family(void *p=nullptr);//p point cmpare function : bool cmp_family(Object & first, Object & second)

		int isMe(char *identifier);
		int isMe(string * identifier);
		int isMe(string identifier);
		int isMe(int id);

		bool add_ex_func(string fun_name, MyFunc func);
		void add_memory(Object *m);
		void clear_my_memory(Object *m=nullptr);//if null clear all item in my_mem list
		void clear_exist();//clear me in exsit list;

		long my_id();
		int my_family();//list my_family
		int my_ex_func();//list my_ex_func
		void my_temp();
		void my_syntax();

		int inc_error();
		int is_error();
		int get_error();
		int set_count(int ct);
		int get_count();
		bool get_s(char ** s ,int size);
		bool wait_cin(int size=O_BUF_LEN);
		char * at_cin_buf(char * str);//is exist

		//execute myfunc ,object, my_family func
		int execute();
		int execute(Object *o);//execute o->execute()
		int execute(Object *o, string obj_name , string fun_name , void *p=nullptr, bool new_thread = false);
		int execute(Object *o, char  *obj_name , char * fun_name , void *p=nullptr, bool new_thread = false);
		int execute(Object *o, string *obj_name=nullptr, string * fun_name = NULL, void *p=nullptr, bool new_thread = false);
		int execute(void *p);//execute this->func
		virtual int execute(void *p1,void *p2);//execute 
		virtual int execute(void *p1,void *p2,void *p3);//execute 
		int execute(Object *o, void *p);//o->execute(void *p)
		int execute(MyFunc func, void *p=nullptr, bool new_thread = false); //execute input func 
		int execute(string *fun_name, void *p=nullptr, bool new_thread = false); //execute this->ex_func 
		int execute(char * fun_name, void *p=nullptr, bool new_thread = false); //execute this->ex_func 
		int execute(string fun_name,void *p=nullptr, bool new_thread = false); //execute this->ex_func 
		
		int allot(int size,void ** o_addr);
		int allot(int old_size, void ** o_addr, int new_size, bool mem_cpy=false);
		void delete_allot(void **addr);

		void s_toupper(string & str);
		int s_replace(string *base,string *tag,string *rep);
		int s_replace(string *base);
		int toupper_replace(string *base,string *tag,string *rep);
		int replace_syntax(string *tag,string *rep);
		int replace_temp(string *tag,string *rep);
		int replace_syntax(int upper_s=0);
		int replace_temp(int upper_s=0);
		int tag_temp(char *tag_value,int upper_s=1);
		int add_tag_rule(CtagItem i);
		int add_tag_rule(string tag, string temp, string replace);
		int add_tag_rule(char* tag, char* temp, char* replace);
		int my_tag_rule();

		int set_time(struct tm *t,int tm_mon,int tm_mday,int tm_year=0,int tm_hour=0,int tm_min=0,int tm_sec=0,int tm_wday=-1,int tm_yday=-1);
		int cmp_time(struct tm *t1,struct tm *t2);
		void delay_clock(clock_t count);
		
		//is func
		bool is_identifier(char *str,void ** o_addr =nullptr); 
		bool is_path(char *str,void ** o_addr=nullptr);
		bool is_definable(char *s);
		//Convert
		string wc_s(wchar_t* wc);
		wstring s_ws(string * sp);
		string ws_s(wstring* ws);
		//system command
		int sys_cmd(char * cmd);
		int sys_cmd(string *cmd);
		int sys_cmd();
		int clear(void *p=nullptr);
		//virtual
		virtual Object * get_class();//object addressS
		virtual Object * where();//object address
		virtual Object * who();//object introduces
		virtual time_t * when();
		virtual int how();//return current status , default is  normal ,success , pass ,OK  .... 
		virtual int func(void *p=nullptr); // callback function
		virtual int create(void *p=nullptr);//No gun, no cannons, we made ourselves, We create ourselves and create the future.(Objetc::create)
		virtual int my_init(void *p=nullptr);//object init
		virtual int my_exit(void *p=nullptr);//object exit
		virtual int my_clear(void *p=nullptr);
		virtual int deal_cmd(int argc, char *argv[]);
		virtual int display(void *p=nullptr);
		virtual int question(void *p=nullptr);
		virtual int url(void *p=nullptr);//execute object url if exist
		virtual int style(void *p=nullptr);//execute object style
		virtual int image(void *p=nullptr);//execute object image if exist
		virtual int audio(void *p=nullptr);//execute object audio if exist
		virtual int video(void *p=nullptr);//execute object vedio if exist
		virtual int get(void *p=nullptr);
	};

	class Cobject:public Object
	{

	};
}

using namespace n_object;
#endif
