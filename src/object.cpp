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

int Cmyfunc::runMe(void *p, bool new_thread)
{
	if (!this->p_func)	return -1;
	if (new_thread == false)
		return this->p_func(p);
	//cout << "Cmyfunc::runMe->thread\n"; //test ok
	thread t(this->p_func, p);
	t.join();
	return 0;
}

int object_func(void *p)//this ext function for object class
{
	if (!p) return -1;
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
	this->addMe();
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

bool Object::isMe(string * identifier)
{
	return this->name == *identifier;
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

int Object::execute(Object *o, string *obj_name, string * fun_name, void * p, bool new_thread)
{
	int ret = -1;
	if (!o) return this->execute();
	if (o->family.empty()) return -1;

	LIST_FAMILY::iterator it;
	Object *op;

	for (it = o->family.begin(); it != o->family.end(); ++it)
	{
		op =(Object *) *it;
		if (obj_name&&obj_name->empty() == false&& op->isMe(obj_name)) {
			if (fun_name&&fun_name->empty() == false) ret = op->execute(fun_name, p, new_thread);
			else ret = op->execute();
		}
		else
		{
			if (fun_name&&fun_name->empty() == false) ret = op->execute(fun_name, p, new_thread);
			else ret = op->execute();
		}

		if(ret==-1) ret=op->execute(op);
	}

	return ret;
}

int Object::execute(void *p)
{
	return this->func(p);
}
//if new_thread==true  run function on new thread .
int Object::execute(MyFunc func, void * p, bool new_thread) //execute input func 
{
	if (!func) return -1;
	if (new_thread == false) return func(p);

	thread t(func, p);
	t.join();
	return 0;
}

int Object::execute(string *fun_name, void * p, bool new_thread) //execute this->ex_func 
{
	return this->execute(fun_name->data(), p, new_thread);
}

int Object::execute(char* fun_name, void * p, bool new_thread)
{
	string s = fun_name;
	cout << "int Object::execute->"<<s << endl;
	return this->execute(s, p, new_thread);
}

int Object::execute(string fun_name, void * p, bool new_thread) //execute this->ex_func 
{
	int ret=-1;
	if (this->ex_func.empty()) return -1;
	LIST_CMYFUNC::iterator it;
	for (it = this->ex_func.begin(); it != this->ex_func.end(); ++it)
	{
		if (it->isMe(fun_name))
		{
			ret = it->runMe(p, new_thread);
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
