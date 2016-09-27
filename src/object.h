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
		virtual void * getClass();//object address
	};
}

using namespace n_object;
#endif
