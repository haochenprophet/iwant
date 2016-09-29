#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>
#include <string>
using namespace std;

namespace n_object {
	class Object
	{
	public:
		string name; //object name
	public:
		Object();//set object name
		void myName();
		bool isMe(string identifier);
		virtual void *  i_am_here();//object address
		virtual void * who_am_i();//object introduce
	};
}

using namespace n_object;
#endif
