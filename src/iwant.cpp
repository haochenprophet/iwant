#include <stdio.h>
#include "iwant.h"
#include "home.h"

#ifndef IWANT_TEST
#define IWANT_TEST 0//1
#endif

Ciwant::Ciwant()
{
#if IWANT_TEST	
	std::cout << "Ciwant::Ciwant()\n";
#endif
	this->name = "Ciwant";
	this->alias = "iwant";
}

Ciwant::~Ciwant()
{
#if IWANT_TEST
	std::cout << "Ciwant::~Ciwant()\n";
#endif
}

Object * Ciwant::who()
{
	std::cout << "I am iwant  APP.\n";
	return this;
}

int iwant_func(void *p)//this ext function for object class
{
	if (!p) return -1;
	string *s = (string *)p;
	std::cout << "iwant_func:" << s->data() << endl;//test
	return 0;
}

#if IWANT_TEST
void add_me_test(Object *p)
{
	Object o;
	Ciwant i;
	Chome oh;
	std::cout << "void add_me_test(Object *p)\n";
	p->addMe(o.where());
	p->addMe(i.where());
	p->addMe(oh.where());
	p->my_family();
}

int main(int argc ,char *argv[])
{
	Object o;
	Ciwant i;
	Chome oh;
	oh.myName();

	for (int n = 0; n < argc; n++)	std::cout << "argc=" << n << ":" << argv[n] << endl;

	string s("Chome"); 
	std::cout << s << endl;
	std::cout << oh.isMe(s) << endl;	//test
	std::cout <<"Object::isMe(string * identifier):"<< oh.isMe(&s) << endl;
	s = "Chome1";
	std::cout << "Chome1:" << oh.isMe(&s) << endl;

	Ciwant *p = (Ciwant *) i.where(); //test ok
	p->myName();
	std::cout << p->isMe((char *)"Ciwant") << endl;
	std::cout << p->isMe((char *)"Object") << endl;
	std::cout << "isMe(id)\n"<<p->isMe(2) << endl;//test ok
	std::cout << p->isMe(3) << endl;

	o.who();
	oh.who();
	p->who();

	std::cout<<"Hello iwant APP .\n";

	char cp[] = "int main(int argc ,char *argv[])";
	o.execute((char *)"objec_func", cp);
	o.execute();
	i.execute((char *)"objec_func", cp,true);

	i.add_ex_func("iwant_func", iwant_func);
	string fun_name = "iwant_func";
	i.execute(&i, nullptr, &fun_name,(void *)&s);

	char str[] = "iwant_func";
	i.execute(str, (void *)&s, false);
	std::cout << (fun_name == str) << endl; //test

	char identifier[] = "Object";
	std::cout<<o.isMe(identifier)<<endl;
	std::cout<< i.isMe(identifier)<<endl;

	char cmd[]="dir";
	i.execute((char *)"runcmd", cmd, true);//test ok
	string obj_name = "Object";
	i.execute((Object *)&i, obj_name, cmd, nullptr, true);
	std::cout << "test: Object->objec_func(cmd)->";//test ok
	i.execute((Object *)&i, obj_name, "objec_func", (void *)cmd, true);
	i.execute((Object *)&i, obj_name, "objec_func", cmd, true);

	o.my_family();
	oh.my_family();
	p->my_family();

	o.addMe(p);
	o.my_family();

	std::cout << "test ok:"<<o.where()<<"="<< &o <<endl;
	p->addMe(&o);
	p->addMe(&oh);

	p->my_family();
	add_me_test(p);
	p->my_family();

	o.my_ex_func();
	oh.my_ex_func();
	p->my_ex_func();

	return 0;
}
#endif//IWANT_TEST
