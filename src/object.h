#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>
#include <thread>
#include <string>
#include <list>
#include <array>
#include <stdlib.h>     /* system, NULL, EXIT_FAILURE */
#include <string.h>
#include <time.h>       /* time_t, time */

#include "temp_def.h"
#include "syntax_def.h"
#include "ex_func.h"

#include <stack> 

//using namespace std; //remove fixed std::bind  conflict socket bind
using std::string;
using std::list;
using std::cout;
using std::endl;

typedef int(*MyFunc)(void *p); //return <0 do nothing , ==0 success, >0 fail

int object_func(void *p);
int  runcmd(void *cmd);

#define PAGE_4K	(4*1024) 

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

	class Cmyfunc {
	public:
		string name; //function name
		string alias;//Alias function name
		MyFunc p_func;
	public:
		Cmyfunc(string fun_name, MyFunc func);
		int isMe(char *identifier);
		int isMe(string * identifier);
		int isMe(string identifier);
		int runMe(void *p, bool new_thread=false);
	};

	typedef list<Cmyfunc> LIST_CMYFUNC;
	typedef list<void *> LIST_FAMILY;//family list type

	class Object
	{
	protected:
		long id;//object id
	public:
		int status;
		int action;

		string name; //object name
		string alias;//Alias object name
		time_t at_time;
		clock_t at_clock;

		string syntax;//this for keyword object
		string temp;//keyword template 
		long locate;//0 start , -1 end , n :locate value 

		list<void *> family;//class list
		list<void *> exist_family;//class exist other family for removeMe frome other class 。

		list<Cmyfunc> ex_func;//extern function list 
		
		list<Object *> my_mem;//list for  memory address 
		list<Object *> exist_list; //for list<Object *> my_mem;  where exist me ,for remove me;

	public:
		Object();//set object name
		~Object();//clears

		void myName(Object *o=NULL);
		void addMe(Object * o = NULL);//add obj to family
		void removeMe(void * item); //frome other class
		void remove_exist_family();

		int isMe(char *identifier);
		int isMe(string * identifier);
		int isMe(string identifier);
		int isMe(int id);

		bool add_ex_func(string fun_name, MyFunc func);
		void add_memory(Object *m);
		void clear_my_memory(Object *m=NULL);//if null clear all item in my_mem list
		void clear_exist();//clear me in exsit list;

		long my_id();
		int my_family();//list my_family
		int my_ex_func();//list my_ex_func
		void my_temp();
		void my_syntax();

		int execute(Object *o, string obj_name , string fun_name , void * p = NULL, bool new_thread = false);
		int execute(Object *o, char  *obj_name , char * fun_name , void * p = NULL, bool new_thread = false);
		int execute(Object *o, string *obj_name = NULL, string * fun_name = NULL, void * p = NULL, bool new_thread = false);
		int execute(void * p = NULL);//execute this->func 
		int execute(MyFunc func, void * p = NULL, bool new_thread = false); //execute input func 
		int execute(string *fun_name, void * p = NULL, bool new_thread = false); //execute this->ex_func 
		int execute(char * fun_name, void * p = NULL, bool new_thread = false); //execute this->ex_func 
		int execute(string fun_name,void * p = NULL, bool new_thread = false); //execute this->ex_func 
		
		int allot(int size,void ** o_addr);
		int allot(int old_size, void ** o_addr, int new_size, bool mem_cpy=false);
		void delete_allot(void **addr);
		virtual Object * i_am_here();//object address
		virtual Object * who_am_i();//object introduces
		virtual int are_you_ok();//return current status , default is  normal ,success , pass ,OK  .... 
		virtual int func(void *p = NULL); // callback function
		virtual int create(void *p=NULL);//No gun, no cannons, we made ourselves, We create ourselves and create the future.(Objetc::create)
		virtual int my_init(void *p=NULL);//object init
		virtual int my_exit(void *p=NULL);//object exit
	};
}

using namespace n_object;
#endif
