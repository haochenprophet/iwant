#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>
#include <thread>
#include <string>
#include <list>
#include <array>

using namespace std;
typedef int(*MyFunc)(void *p); //return <0 do nothing , ==0 success, >0 fail

int object_func(void *p);

namespace n_object {

	class Cmyfunc {
	public:
		string name; //function name
		MyFunc p_func;
	public:
		Cmyfunc(string fun_name, MyFunc func);
		bool isMe(string identifier);
		int runMe(void *p, bool new_thread=false);
	};

	typedef list<Cmyfunc> LIST_CMYFUNC;

	class Object
	{
	public:
		int id;//object id
		string name; //object name
		list<void *> family;//class list
		list<Cmyfunc> ex_func;//extern function list 
	public:
		Object();//set object name
		~Object();//clears
		void myName();
		void addMe(void * obj = NULL);//add obj to family
		bool isMe(string identifier);
		bool isMe(int id);
		bool add_ex_func(string fun_name, MyFunc func);
		int execute(void * p = NULL);//execute this->func 
		int execute(MyFunc func, void * p = NULL, bool new_thread = false); //execute input func 
		int execute(string fun_name,void * p = NULL, bool new_thread = false); //execute this->ex_func 
		virtual void *  i_am_here();//object address
		virtual void * who_am_i();//object introduce
		virtual int func(void *p = NULL); // callback function
	};
}

using namespace n_object;
#endif
