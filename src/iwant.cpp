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

#if IWANT_TEST
int main(int argc ,char *argv[])
{
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

	cout<<"Hello iwant APP .\n";

	return 0;
}
#endif//IWANT_TEST
