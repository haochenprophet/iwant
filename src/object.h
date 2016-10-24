#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>
#include <thread>
#include <string>
#include <list>
#include <array>
#include <stdlib.h>     /* system, NULL, EXIT_FAILURE */

using namespace std;
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
	public:
		Cparameter();
	};

	class CmyMemory
	{
	public:
		string name; //memory name for recode 
		long id;//this auto set ,do not change 
		char *addr;//by byte memory 
		int size;
		int type;//0 is no type

		list<void *> exist_list; //for list<CmyMemory> my_mem;  where exist me ,for remove me;
	public:
		CmyMemory();
		CmyMemory(int size); 
		~CmyMemory();
		void *allot(int size=0,int type=0);
		bool isMe(void * addr = NULL, long id = 0,string name="");
		void clear_exist();//clear me in exsit list; 
		void delete_me();
		CmyMemory * i_am_here();
		virtual int deal(void *p);
	};

	class Cmyfunc {
	public:
		string name; //function name
		string alias;//Alias function name
		MyFunc p_func;
	public:
		Cmyfunc(string fun_name, MyFunc func);
		bool isMe(char *identifier);
		bool isMe(string * identifier);
		bool isMe(string identifier);
		int runMe(void *p, bool new_thread=false);
	};

	typedef list<Cmyfunc> LIST_CMYFUNC;
	typedef list<void *> LIST_FAMILY;//family list type
	typedef list<CmyMemory*> LIST_CMYMEMORY; //define list  type

	class Object
	{
	private:
		long id;//object id
	public:
		int status;
		int action;
		string name; //object name
		string alias;//Alias object name
		list<void *> family;//class list
		list<void *> exist_family;//class exist other family for removeMe frome other class 。
		list<Cmyfunc> ex_func;//extern function list 
		list<CmyMemory *> my_mem;//list for  memory address 
	public:
		Object();//set object name
		~Object();//clears
		void myName();
		void addMe(Object * o = NULL);//add obj to family
		void removeMe(void * item); //frome other class
		void remove_exist_family();
		bool isMe(char *identifier);
		bool isMe(string * identifier);
		bool isMe(string identifier);
		bool isMe(int id);
		bool add_ex_func(string fun_name, MyFunc func);
		void add_memory(CmyMemory *m);
		void clear_my_memory(CmyMemory *m=NULL);//if null clear all item in my_mem list
		int my_family();//list my_family
		int my_ex_func();//list my_ex_func
		int execute(Object *o, string obj_name , string fun_name , void * p = NULL, bool new_thread = false);
		int execute(Object *o, string *obj_name = NULL, string * fun_name = NULL, void * p = NULL, bool new_thread = false);
		int execute(void * p = NULL);//execute this->func 
		int execute(MyFunc func, void * p = NULL, bool new_thread = false); //execute input func 
		int execute(string *fun_name, void * p = NULL, bool new_thread = false); //execute this->ex_func 
		int execute(char * fun_name, void * p = NULL, bool new_thread = false); //execute this->ex_func 
		int execute(string fun_name,void * p = NULL, bool new_thread = false); //execute this->ex_func 
		long my_id();
		virtual Object * i_am_here();//object address
		virtual Object * who_am_i();//object introduces
		virtual int are_you_ok();//return current status , default is  normal ,success , pass ,OK  .... 
		virtual int func(void *p = NULL); // callback function
	};
}

using namespace n_object;
#endif
