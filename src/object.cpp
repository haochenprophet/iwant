#include "object.h"

Cmyfunc::Cmyfunc(string fun_name, MyFunc  func)
{
	this->name = fun_name;
	this->p_func = func;
}

bool Cmyfunc::isMe(string identifier)
{
	return this->name == identifier;
}

int object_func(void *p)//this ext function for object class
{
	char *cp =(char *) p;
	cout << "object_func:"<<cp<<endl;//test
	return 0;
}

int current_id = 0;
Object::Object()
{
	this->id = ++current_id;
	this->name = "Object";
	this->add_ex_func("objec_func", object_func);
}

Object::~Object()
{
	this->family.clear();
	this->ex_func.clear();
}

void Object::myName()
{
	cout << this->name <<this->id<< endl;
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

bool Object::isMe(int id)
{
	if (this->id == id) return true;
	return false;
}

bool Object::add_ex_func(string fun_name, MyFunc func)
{
	Cmyfunc *f= new Cmyfunc(fun_name, func);
	this->ex_func.push_back(*f);
	return true;
}

int Object::execute(void *p)
{
	return this->func(p);
}

int Object::execute(MyFunc func, void * p) //execute input func 
{
	if (func) return func(p);
	return -1;
}

int Object::execute(string fun_name, void * p) //execute this->ex_func 
{
	int ret=-1;
	LIST_CMYFUNC::iterator it;
	for (it = this->ex_func.begin(); it != this->ex_func.end(); ++it)
	{
		if (it->isMe(fun_name))
		{
			ret = it->p_func(p);
		}
	}
	return ret;
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

int Object::func(void *p)
{
	cout << this->name << "Object::func\n";
	return 0;
}
