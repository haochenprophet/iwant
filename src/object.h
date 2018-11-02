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
#include <csignal> 

#include "temp_def.h"
#include "syntax_def.h"
#include "ex_func.h"
#include "uuid.h"
#include "bits_def.h"
#include "action_type.h"
#include "data.h"
#include "input.h"
#include "move.h"
#include "relation.h"

//using namespace std; //remove fixed std::bind  conflict socket bind
using std::string;
using std::wstring;
//using std::list;
//using std::cout;
using std::endl;

enum UsingLanguage
{
	EnglishLanguage,
	SimplifiedChinese,
};

typedef int(*MyFunc)(void *p); //return <0 do nothing , ==0 success, >0 fail

int object_func(void *p);
int runcmd(void *cmd);
void signal_handler(int signum);

#include "object_def.h"

namespace n_object {

	class Cparameter
	{
	public:
		void *in;//can point Udata[]
		void *out;
		int size_in;//in size
		int size_out;//out_size
		std::stack<void *> s; //parameter stack
	public:
		Cparameter() { this->in = nullptr;	this->out = nullptr;	this->size_in = 0;	this->size_out = 0; }
		~Cparameter() { while (!this->s.empty()) this->s.pop(); }//exit clear stack
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
	typedef std::list<CtagItem> LIST_TAGITEM;

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

	typedef std::list<Cmyfunc> LIST_CMYFUNC;
	typedef std::list<void *> LIST_FAMILY;//family list type

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
	typedef std::list<Ctimeline> LIST_CTIMELINE;

	class Ccmd //command class
	{
	public:
		int argc;
		char ** argv;
	public:
		Ccmd(){argc = 0, argv = nullptr;}
	};

	class Cstatus :public Udata//status class
	{
	};
	
	class Otime //Object 's time O:Object
	{
	public://time and clock
		struct tm * tm_start, *tm_at, *tm_end;
		time_t start_time;//for class memory time
		time_t at_time;
		time_t end_time;
		clock_t start_clock;
		clock_t at_clock;
		clock_t end_clock;
	public :
		Otime();
	};
	
	class ObjectRelation
	{
	public:
		void * obj;//point Object 
		Orelation * relation;//point relation
	};
	typedef std::list<ObjectRelation *> LIST_OBJ_RELATION;

	class Object:public Ouuid, Otime
	{
	protected:
		long id;//object id
	public:
		Omove * move;
		Oinput *input;//set the input point change object input Cparameter
		Udata udata;
		Cstatus status;
		int silent;//can use to print or not print
		long long priority;
		ACTION_T action; //bit 0-64 or 0- max [n] for action flag 
		ActionInfo * action_info;
		int error; //error count >0 error
		int count;
		int cin_buf_len;
		char *cin_buf;

		string name; //object name
		string alias;//Alias object name
		string symbol;//for sign detect
		string description;
		
		string syntax;//this for keyword object
		string temp;//keyword template 
		string s_tag;
		string s_rep;

		long locate;//0 start , -1 end , n :locate value 
		int language;
		int direction;
		int value;
		int velocity;
		//object cmd
		Ccmd cmd;

		std::list<void *> family;//class list
		std::list<void *> exist_family;//class exist other family for removeMe frome other class 。

		std::list<Cmyfunc> ex_func;//extern function list 
		std::list<CtagItem> l_tag_rule;//for tag rule 

		std::list<Object *> my_mem;//list for  memory address 
		std::list<Object *> exist_list; //for list<Object *> my_mem;  where exist me ,for remove me;
		std::list<Ctimeline> obj_track;//use time as key for recoder the object space track and status

		std::list<void *> l_url;//url list
		std::list<void *> l_style;//object style list
		std::list<void *> l_image;//object image list
		std::list<void *> l_audio;//object audio list
		std::list<void *> l_video;//object vedio list
		LIST_OBJ_RELATION l_relation;//list relation with other object
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
		int add_relation(Object *o, Orelation * r);//add obj relation to object relation list
		int clear_relation();
		void addMe(Object *o=nullptr);//add obj to family
		void removeMe(void * item); //from other class
		void remove_exist_family();
		int  sort_family(void *p=nullptr);//p point cmpare function : bool cmp_family(Object & first, Object & second)

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
		//set
		int set(Oinput *i) { this->input = i; return 0; }
		int set(Omove *m) { this->move = m; return 0; }
		//execute myfunc ,object, my_family func
		int execute();
		int execute(Object *o);//execute o->execute()
		int execute(Object *o, string obj_name , string fun_name , void *p=nullptr, bool new_thread = false);
		int execute(Object *o, char  *obj_name , char * fun_name , void *p=nullptr, bool new_thread = false);
		int execute(Object *o, string *obj_name, string * fun_name = nullptr, void *p=nullptr, bool new_thread = false);
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
		int s_replace(string *base, char *tag, char *rep);
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
		int get_cmd(int argc, char *argv[],char *cmd);
		int list_cmd(int argc, char *argv[]);
		int dispatch_cmd(int argc, char *argv[]);
		int dispatch_runme(void * myname, void *p = nullptr);
		int clear(void *p=nullptr);
		//action
		bool is_action(ACTION_T a, ACTION_T t, EatcionRelation r);//a action value ,t action type ,e operate
		int deal_action(Action * a, int count, Object * o= nullptr);//do action table 
		int action_help(Action * a, int count);
		ACTION_T get_action(Action * a, int count,char * name);
		virtual int do_action(void * a);
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
		virtual int get(void *p=nullptr);//get data ,url ,download file and so on ...
		virtual int help(void *p = nullptr);//Can be used for command line help
		virtual int ui(void *p = nullptr);//UI:User Interface , include Graphic interface(GUI), Audio interface(AUI), video interface(VUI),Text Interface (TUI)
		virtual int event(void *p = nullptr);
		virtual int task(void *p = nullptr);//Execution task queue
		virtual int transaction(void *p = nullptr);//task function
		virtual int commit(void *p = nullptr);//task function
		virtual int interrupt(void *p = nullptr);
		virtual int callback(void *p = nullptr);//objec callback
		virtual int exception(void *p = nullptr);//Respond or issue an exception
		virtual int message(void *p = nullptr);//Passing and processing messages
		virtual int feedback(void *p = nullptr);//send and accept feedback info
		virtual int past(void *p = nullptr);	//The object's  past function, Related to time, action, and condition
		virtual int rollback(void *p = nullptr);//The object's  past function, 
		virtual int previous(void *p = nullptr);
		virtual int future(void *p = nullptr);//The object's  future function, 
		virtual int next(void *p = nullptr);
		virtual int reservation(void *p = nullptr);//The object's future callback function, called at a certain time, location, event, condition ....of the object's future
		virtual int current(void *p = nullptr);		//The object's  current state function, 		
		virtual int condition(void *p = nullptr);		//The object's  condition function, 
		virtual int depend(void *p = nullptr);
		virtual int environment(void *p = nullptr); //Verify and return to a environment state and info
		virtual int context(void *p = nullptr); //context info
		virtual int secure(void *p = nullptr); //Verify and return to a safe state
		virtual int runme(void * myname, void *p= nullptr);	//dispatch my function
		virtual int transfer(void * myname, void *p=nullptr,Object *o = nullptr); //Transfer runme() to input object,p:parameter
		virtual int go(void *p = nullptr);	//go function for object move support
		virtual int register_signal(int signum);
		virtual int rejoin_signal(int signum);
		int register_all_signal(int signum=-1);
		//Arithmetic Operators
		void  operator+(Object *o) { this->addMe(o); }
		void  operator+(Udata *o) { this->udata.data.ull += o->data.ull; }
		void  operator-(Object *o) { this->removeMe(o);}
		void  operator-(Udata *o) { this->udata.data.ull -= o->data.ull; }
		void  operator*(Object *o) { this->udata.data.ull *= o->udata.data.ull; }
		void  operator/(Object *o) { if(o->udata.data.ull) this->udata.data.ull /= o->udata.data.ull; }
		void  operator%(Object *o) { if(o->udata.data.ull )this->udata.data.ull %= o->udata.data.ull; }
		//Relational Operators
		 bool operator==(char *identifier) { return (0 != this->isMe(identifier)); }
		 bool operator==(string * identifier) { return (0 != this->isMe(identifier)); }
		 bool operator==(string identifier) { return (0 != this->isMe(identifier)); }
		 bool operator==(int id) { return (0 != this->isMe(id)); }
		 bool operator==(Object *o) { return (this->uuid==o->uuid); }
		 bool operator!=(char *identifier) { return (0 == this->isMe(identifier)); }
		 bool operator!=(string * identifier) { return (0 == this->isMe(identifier)); }
		 bool operator!=(string identifier) { return (0 == this->isMe(identifier)); }
		 bool operator!=(int id) { return (0 == this->isMe(id)); }
		 bool operator!=(Object *o) { return !(this->uuid == o->uuid); }
		 bool operator < (Object& o) { return (this->name < o.name); }
		 bool operator <= (Object& o) { return (this->name <= o.name); }
		 bool operator > (Object&o) { return (this->name > o.name); }
		 bool operator >= (Object&o) { return (this->name >= o.name); }
		 //Logical Operators
		 bool operator || (Object&o) { return this->udata.data.ull || o.udata.data.ull; }
		 bool operator && (Object&o) { return this->udata.data.ull && o.udata.data.ull; }
		 bool operator ! () { return !this->udata.data.ull; }
		 //Positive and negative operators
		
		 void operator + () {}
		 void operator - () { this->udata.data.ll=(-this->udata.data.ll) ; }
		// Object* operator & () { return this; }
		// Object& operator * () { }
		 // operator ()
		 int operator ()() { return this->execute(); }
		 int operator ()(Object *o) { return this->execute(o); }
		 int operator ()(Object *o, string obj_name, string fun_name, void *p = nullptr, bool new_thread = false) { return this->execute(o,obj_name,fun_name,p,new_thread); }
		 int operator ()(Object *o, char  *obj_name, char * fun_name, void *p = nullptr, bool new_thread = false) { return this->execute(o, obj_name, fun_name, p ,  new_thread); }
		 int operator ()(Object *o, string *obj_name, string * fun_name = nullptr, void *p = nullptr, bool new_thread = false) { return this->execute( o,  obj_name,  fun_name ,  p  ,  new_thread ); }
		 int operator ()(void *p) { return this->execute(p); }
		 int operator ()(void *p1, void *p2) { return this->execute(p1,p2); }
		 int operator ()(void *p1, void *p2, void *p3) { return this->execute(p1,p2,p3); }
		 int operator ()(Object *o, void *p) { return this->execute(o,p); }
		 int operator ()(MyFunc func, void *p = nullptr, bool new_thread = false) { return this->execute(func,p, new_thread); }
		 int operator ()(string *fun_name, void *p = nullptr, bool new_thread = false) { return this->execute(fun_name,p,new_thread); }
		 int operator ()(char * fun_name, void *p = nullptr, bool new_thread = false) { return this->execute(fun_name, p, new_thread); }
		 int operator ()(string fun_name, void *p = nullptr, bool new_thread = false) { return this->execute(fun_name, p, new_thread); }

		 //Self-increasing, self-decreasing operator
		 void operator ++ () { ++this->udata.data.ull; }//before ++
		 void operator ++ (int i) { this->udata.data.ull+=i; }
		 void operator --() { --this->udata.data.ull; }//before--
		 void operator -- (int i) { this->udata.data.ull-=i; }
		 //Bit operators
		 void operator | (Object& o) { this->udata.data.ull |= o.udata.data.ull; }
		 void operator & (Object& o) { this->udata.data.ull &= o.udata.data.ull; }
		 void operator ^ (Object& o) { this->udata.data.ull ^= o.udata.data.ull; }
		 void operator << (int i) { this->udata.data.ull <<= i; }
		 void operator >> (int i) { this->udata.data.ull >>= i; }
		 void operator ~ () { this->udata.data.ull = ~this->udata.data.ull; }
		 //Assignment operators
		 void operator += (const Object& o) { this->udata.data.ull += o.udata.data.ull; }
		 void operator -= (const Object& o) { this->udata.data.ull -= o.udata.data.ull; }
		 void operator *= (const Object& o) { this->udata.data.ull *= o.udata.data.ull; }
		 void operator /= (const Object& o) { if (o.udata.data.ull) this->udata.data.ull /= o.udata.data.ull; }
		 void operator %= (const Object& o) { if (o.udata.data.ull) this->udata.data.ull %= o.udata.data.ull; }
		 void operator &= (const Object& o) { this->udata.data.ull &= o.udata.data.ull; }
		 void operator |= (const Object& o) { this->udata.data.ull |= o.udata.data.ull; }
		 void operator ^= (const Object& o) { this->udata.data.ull ^= o.udata.data.ull; }
		 void operator <<= (int i) { this->udata.data.ull <<= i; }
		 void operator >>= (int i) { this->udata.data.ull >>= i; }
		 //Memory operator
		 /*
		 void *operator new(size_t size) { }
		 void *operator new(size_t size, int i) { }
		 void *operator new[](size_t size) {}
		 void operator delete(void*p) { }
		 void operator delete(void*p, int i, int j) { }
		 void operator delete[](void* p) {}
		 */
		 //Special operator
		 void operator = (const Object& o) { this->udata.data.ull = o.udata.data.ull; }
		 void operator = (Oinput* i) { this->input = i; }
		 void operator = (Omove* m) { this->move = m; }
		 /*
		 char operator [] (int i) {}
		 const char* operator () () {}
		 udata operator -> () { return this->udata; }
		 operator char* () const {}
		 operator int() {}
		 operator const char() const {}s
		 operator short int() const {}
		 operator long long() const {}
		 */
	};

	class Cobject:public Object
	{
	public:
		Cobject();
		int my_init(void *p= nullptr);
	};
}
extern n_object::Object object_global;
using namespace n_object;
#endif
