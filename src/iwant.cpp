#include <stdio.h>
#include "iwant.h"
#include "object_home.h"

#define IWANT_TEST	1
#define THREAD_TEST 1
Ciwant::Ciwant()
{
#if IWANT_TEST	
	cout << "Ciwant::Ciwant()\n";
#endif
	this->name = "Ciwant";
	this->alias = this->name; 
}

Ciwant::~Ciwant()
{
#if IWANT_TEST
	cout << "Ciwant::~Ciwant()\n";
#endif
}

void * Ciwant::who_am_i()
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
#if THREAD_TEST
#include <thread>         // std::thread

int foo()
{
	// do stuff...
	cout << "void foo()\n";
	return 0;
}

int bar(int x)
{
	// do stuff...
	cout << "void bar(int x)"<<x<<endl;
	return 0;
}

int thread_test()
{
	std::thread first(foo);     // spawn new thread that calls foo()
	std::thread second(bar, 99);  // spawn new thread that calls bar(0)

	std::cout << "main, foo and bar now execute concurrently...\n";

	// synchronize threads:
	first.join();                // pauses until first finishes
	second.join();               // pauses until second finishes

	std::cout << "foo and bar completed.\n";

	return 0;
}
#endif//THREAD_TEST

int main(int argc ,char *argv[])
{
	Object o;
	Ciwant i;
	Cobjecthome oh;
	oh.myName();

	for (int n = 0; n < argc; n++)	cout << "argc=" << n << ":" << argv[n] << endl;

	string s("Cobjecthome"); 
	cout << s << endl;
	cout << oh.isMe(s) << endl;	//test
	cout <<"Object::isMe(string * identifier):"<< oh.isMe(&s) << endl;
	s = "Cobjecthome1";
	cout << "Cobjecthome1:" << oh.isMe(&s) << endl;

	Ciwant *p = (Ciwant *) i.i_am_here(); //test ok
	p->myName();
	cout << p->isMe("Ciwant") << endl;
	cout << p->isMe("Object") << endl;
	cout << "isMe(id)\n"<<p->isMe(2) << endl;//test ok
	cout << p->isMe(3) << endl;

	o.who_am_i();
	oh.who_am_i();
	p->who_am_i();

	cout<<"Hello iwant APP .\n";

	char cp[] = "int main(int argc ,char *argv[])";
	o.execute("objec_func", cp);
	o.execute();
	i.execute("objec_func", cp,true);

	i.add_ex_func("iwant_func", iwant_func);
	string fun_name = "iwant_func";
	i.execute(&i, NULL, &fun_name,(void *)&s);

	char str[] = "iwant_func";
	i.execute(str, (void *)&s, false);
	cout << (fun_name == str) << endl; //test

	char identifier[] = "Object";
	cout<<o.isMe(identifier)<<endl;
	cout<< i.isMe(identifier)<<endl;

#if THREAD_TEST
	thread_test();
#endif
	char cmd[]="dir";
	i.execute("runcmd", cmd, true);//test ok
	return 0;
}
#endif//IWANT_TEST
