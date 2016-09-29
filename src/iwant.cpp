#include <stdio.h>
#include "iwant.h"
#include "object_home.h"

#define IWANT_TEST	1

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

	o.who_am_i();
	oh.who_am_i();
	p->who_am_i();

	cout<<"Hello iwant APP .\n";

	return 0;
}
#endif//IWANT_TEST
