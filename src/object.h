#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>
#include <string>
#include <list>
using namespace std;
typedef int(*MyFunc)(void *p);

class Cmyfunc{
public:
	string name; //function name
	MyFunc *func;
public:
	Cmyfunc(string fun_name, MyFunc *func);
	bool isMe(string identifier);
};

namespace n_object {
	class Object
	{
	public:
		string name; //object name
		list<void *> family;//function list
		list<Cmyfunc> myfunc;//function list 
	public:
		Object();//set object name
		~Object();//clear
		void myName();
		void addMe(void * obj=NULL);//add obj to family
		bool isMe(string identifier);
		bool add_myfunc(string fun_name, MyFunc *func);
		virtual void *  i_am_here();//object address
		virtual void * who_am_i();//object introduce
		virtual int my_func(void *p); // callback function
	};
}

using namespace n_object;
#endif
