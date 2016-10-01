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

#if IWANT_TEST
#if THREAD_TEST
#include <thread>         // std::thread
void foo()
{
	// do stuff...
	cout << "void foo()\n";
}

void bar(int x)
{
	// do stuff...
	cout << "void bar(int x)"<<x<<endl;
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

	string s("Cobjecthome"); 
	cout << s << endl;
	cout << oh.isMe(s) << endl;	//test

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

#if THREAD_TEST
	thread_test();
#endif

	return 0;
}
#endif//IWANT_TEST
