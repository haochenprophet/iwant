#include <stdio.h>
#include "iwant.h"
#include "home.h"

#ifndef IWANT_TEST
#define IWANT_TEST 0//1
#endif

Ciwant::Ciwant()
{
#if IWANT_TEST	
	cout << "Ciwant::Ciwant()\n";
#endif
	this->name = "Ciwant";
	this->alias = "iwant";
}

Ciwant::~Ciwant()
{
#if IWANT_TEST
	cout << "Ciwant::~Ciwant()\n";
#endif
}

Object * Ciwant::who_am_i()
{
	cout << "I am iwant  APP.\n";
	return this;
}

int iwant_func(void *p)//this ext function for object class
{
	if (!p) return -1;
	string *s = (string *)p;
	cout << "iwant_func:" << s->data() << endl;//test
	return 0;
}

#if IWANT_TEST
void add_me_test(Object *p)
{
	Object o;
	Ciwant i;
	Chome oh;
	cout << "void add_me_test(Object *p)\n";
	p->addMe(o.i_am_here());
	p->addMe(i.i_am_here());
	p->addMe(oh.i_am_here());
	p->my_family();
}

int main(int argc ,char *argv[])
{
	Object o;
	Ciwant i;
	Chome oh;
	oh.myName();

	for (int n = 0; n < argc; n++)	cout << "argc=" << n << ":" << argv[n] << endl;

	string s("Chome"); 
	cout << s << endl;
	cout << oh.isMe(s) << endl;	//test
	cout <<"Object::isMe(string * identifier):"<< oh.isMe(&s) << endl;
	s = "Chome1";
	cout << "Chome1:" << oh.isMe(&s) << endl;

	Ciwant *p = (Ciwant *) i.i_am_here(); //test ok
	p->myName();
	cout << p->isMe((char *)"Ciwant") << endl;
	cout << p->isMe((char *)"Object") << endl;
	cout << "isMe(id)\n"<<p->isMe(2) << endl;//test ok
	cout << p->isMe(3) << endl;

	o.who_am_i();
	oh.who_am_i();
	p->who_am_i();

	cout<<"Hello iwant APP .\n";

	char cp[] = "int main(int argc ,char *argv[])";
	o.execute((char *)"objec_func", cp);
	o.execute();
	i.execute((char *)"objec_func", cp,true);

	i.add_ex_func("iwant_func", iwant_func);
	string fun_name = "iwant_func";
	i.execute(&i, nullptr, &fun_name,(void *)&s);

	char str[] = "iwant_func";
	i.execute(str, (void *)&s, false);
	cout << (fun_name == str) << endl; //test

	char identifier[] = "Object";
	cout<<o.isMe(identifier)<<endl;
	cout<< i.isMe(identifier)<<endl;

	char cmd[]="dir";
	i.execute((char *)"runcmd", cmd, true);//test ok
	string obj_name = "Object";
	i.execute((Object *)&i, obj_name, cmd, nullptr, true);
	cout << "test: Object->objec_func(cmd)->";//test ok
	i.execute((Object *)&i, obj_name, "objec_func", (void *)cmd, true);
	i.execute((Object *)&i, obj_name, "objec_func", cmd, true);

	o.my_family();
	oh.my_family();
	p->my_family();

	o.addMe(p);
	o.my_family();

	cout << "test ok:"<<o.i_am_here()<<"="<< &o <<endl;
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
