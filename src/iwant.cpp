#include <stdio.h>
#include "iwant.h"
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
	Ciwant *p = (Ciwant *) i.getClass(); //test ok
	p->myName();
	cout<<"Hello iwant APP .\n";
	return 0;
}
#endif//IWANT_TEST
