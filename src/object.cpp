#include "object.h"

Cmyfunc::Cmyfunc(string fun_name, MyFunc * func)
{
	this->name = fun_name;
	this->func = func;
}

bool Cmyfunc::isMe(string identifier)
{
	return this->name == identifier;
}

Object::Object()
{
	this->name = "Object";
}

Object::~Object()
{
	this->family.clear();
	this->myfunc.clear();
}

void Object::myName()
{
	cout << this->name << endl;
}

void Object::addMe(void *obj)
{
	if(obj) this->family.push_back(obj);
	else this->family.push_back(this);
}

bool Object::isMe(string identifier)
{
	return this->name == identifier;
}

bool Object::add_myfunc(string fun_name, MyFunc *func)
{
	Cmyfunc *f= new Cmyfunc(fun_name, func);
	this->myfunc.push_back(*f);
	return true;
}

void * Object::i_am_here()
{
	return this;
}

void * Object::who_am_i()
{
	this->myName();
	return this;
}

int Object::my_func(void *p)
{
	cout << this->name << "Object::my_func\n";
	return 0;
}
