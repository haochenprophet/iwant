#include "object.h"
#define OBJECT_TEST	1

Cparameter::Cparameter()
{
	this->in=NULL;
	this->out=NULL;
	this->size=0;
}

long my_memory_id = 0;
CmyMemory::CmyMemory()
{
	this->name = "CmyMemory";
	this->id = ++my_memory_id;
	this->name += std::to_string(this->id);
	this->allot();//call for init 
}

CmyMemory::CmyMemory(int size)
{
	this->name = "CmyMemory";
	this->id = ++my_memory_id;
	this->name += std::to_string(this->id);
	this->allot(size);
}

CmyMemory::~CmyMemory()
{
	this->delete_me();
	this->clear_exist();
	this->exist_list.clear();
}

void * CmyMemory::allot(int size, int type)
{
	this->size = 0;
	this->addr = NULL;

	if (size) {
		try {
			this->addr = new char[size];//
			this->size = size;
		}
		catch (...)//fail
		{
			cout<< "error:CmyMemory::CmyMemory(int size)=" << size << endl;
		}
	}

	this->type =type;

	return (void *)this->addr;
}

bool CmyMemory::isMe(void * addr,  long id,string name)
{
	return ((addr&&addr == (void *)this->addr) || (id&&this->id == id) || (name.length() && this->name == name));
}

void CmyMemory::clear_exist()
{
	Object *o;
	while (!this->exist_list.empty())
	{
		o = (Object *)this->exist_list.back();
		o->my_mem.remove(this);
		this->exist_list.pop_back();
	}
}

void CmyMemory::delete_me()
{
	if (this->addr) {
		delete[](char*) this->addr;
		this->addr = NULL;
	}
}

CmyMemory* CmyMemory::i_am_here()
{
	return this;
}

int CmyMemory::deal(void *p)
{
	return 0;
}

Cmyfunc::Cmyfunc(string fun_name, MyFunc  func)
{
	this->name = fun_name;
	this->alias = this->name;
	this->p_func = func;
}

bool Cmyfunc::isMe(char *identifier)
{
	return this->name == identifier || this->alias == identifier;
}

bool Cmyfunc::isMe(string * identifier)
{
	return this->name == *identifier || this->alias == *identifier;
}

bool Cmyfunc::isMe(string identifier)
{
	return this->name == identifier||this->alias==identifier;
}

int Cmyfunc::runMe(void *p, bool new_thread)
{
	if (!this->p_func)	return -1;
	if (new_thread == false)
		return this->p_func(p);
	//cout << "Cmyfunc::runMe->thread\n"; //test ok
	std::thread(this->p_func, p).detach();
	return 0;
}

int object_func(void *p)//this ext function for object class
{
	if (!p) return -1;
	char *cp =(char *) p;
	cout << "object_func:"<<cp<<endl;//test
	return 0;
}

int  runcmd(void *cmd)
{
	return system((char *)cmd);
}

long object_id = 0;
Object::Object()
{
	this->id = ++object_id;
	this->status=0;
	this->action=0;
	this->name = "Object";
	this->alias = this->name;
	this->name += std::to_string(object_id);//change name for nam +=id
	this->add_ex_func("objec_func", object_func);
	this->add_ex_func("runcmd", runcmd);
	this->addMe();
}

Object::~Object()
{
	this->family.clear();
	this->ex_func.clear();
	this->remove_exist_family();
	this->exist_family.clear();
	this->clear_my_memory();//clear my memory
	this->my_mem.clear();
}

void Object::myName()
{
	cout << "name:" << this->name << " alias:"<<this->alias <<" id:"<< this->id << endl;
}

void Object::addMe(Object * o)
{
	if (o) {
		this->family.push_back(o);
		o->exist_family.push_back(this);
	}
	else this->family.push_back(this);
}

void Object::removeMe(void * item)
{
	this->family.remove(item);
}

void Object::remove_exist_family()
{
	Object *o;
	while (!this->exist_family.empty())
	{
		o=(Object *)this->exist_family.back();
		o->removeMe(this);
		this->exist_family.pop_back();
	}
}

bool Object::isMe(char *identifier)
{
	return this->name == identifier || this->alias == identifier;
}

bool Object::isMe(string * identifier)
{
	return this->name == *identifier||this->alias==*identifier;
}

bool Object::isMe(string identifier)
{
	return this->name == identifier || this->alias == identifier;
}

bool Object::isMe(int id)
{
	if (this->id == id) return true;
	return false;
}

bool Object::add_ex_func(string fun_name, MyFunc func)
{
	Cmyfunc f(fun_name, func);
	this->ex_func.push_back(f);
	return true;
}

void Object::add_memory(CmyMemory *m)
{
	this->my_mem.push_back(m);
	m->exist_list.push_back(this);//this Object 
}

void Object::clear_my_memory(CmyMemory *m)
{
	if (m)
	{
		m->exist_list.remove(this);
		this->my_mem.remove(m);
		return;
	}

	CmyMemory *p;
	while (!this->my_mem.empty())
	{
		p=this->my_mem.back();
		p->exist_list.remove(this);
		this->my_mem.pop_back();
	}
}

int Object::my_family()
{
	int count = 0;
	LIST_FAMILY::iterator it;
	Object *op;
	for (it = this->family.begin(); it != this->family.end(); ++it)
	{
		op = (Object *)*it;
		cout << this->name << ":"<<++count <<":"<< op->name << op->i_am_here() << endl;
	}
	cout << this->name << " my_family count : " << count << endl;
	return count;
}

int Object::my_ex_func()
{
	int count = 0;
	LIST_CMYFUNC::iterator it;
	for (it = this->ex_func.begin(); it != this->ex_func.end(); ++it)
	{
		cout <<this->name<<":"<<++count << ":" << it->name << it->p_func << endl;
	}
	cout << this->name << " my_ex_func count : " << count << endl;
	return count;
}

int Object::execute(Object *o, string obj_name, string fun_name, void * p, bool new_thread)
{
	return this->execute(o, &obj_name, &fun_name, p, new_thread);
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
		op = (Object *)*it;
		if (obj_name&&obj_name->empty() == false&& op->isMe(obj_name)) {
			if (fun_name&&fun_name->empty() == false) ret = op->execute(fun_name, p, new_thread);
			else ret = op->execute();
		}
		else
		{
			if (fun_name&&fun_name->empty() == false) ret = op->execute(fun_name, p, new_thread);
			else ret = op->execute();
		}
	}
	if (ret == -1 && fun_name&&fun_name->empty() == false) ret = this->execute("runcmd", (void *)fun_name->c_str(), new_thread); //auto run extern commant
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

	std::thread(func, p).detach();

	return 0;
}

int Object::execute(string *fun_name, void * p, bool new_thread) //execute this->ex_func 
{
	return this->execute(fun_name->data(), p, new_thread);
}

int Object::execute(char* fun_name, void * p, bool new_thread)
{
	string s = fun_name;
	cout << "int Object::execute->"<<s << endl;//test
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

long Object::my_id()
{
	return this->id;
}

Object * Object::i_am_here()
{
	return this;
}

Object * Object::who_am_i()
{
	this->myName();
	return this;
}

int Object::are_you_ok()
{
	return this->status; //normal, success, OK ,Pass!  and so on
}

int Object::func(void *p)
{
	cout << this->name << "Object::func\n";
	return 0;
}

#if OBJECT_TEST
int main()
{
	cout << "Object main !\n";
	CmyMemory m1;
	CmyMemory m2;
	CmyMemory m3;
	CmyMemory m4;

	Object o;

	o.add_memory(m1.i_am_here());
	o.add_memory(m2.i_am_here());
	o.add_memory(m3.i_am_here());
	o.add_memory(m4.i_am_here());
	return 0;
}
#endif