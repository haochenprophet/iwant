#include "class.h"

Cclass::Cclass()
{
	this->name = "Cclass";
	this->alias = "class";
	this->syntax = CLASS_SYNTAX;
	this->temp = CLASS_H_TEMP;
}

int Cclass::func(void *p)
{
	cout << this->syntax;
	return 0;
}

int Cclass::create(void *p)
{
	if (!p) return -1;

	return 0;
}

#ifndef CLASS_TEST
#define CLASS_TEST 01
#endif

#if CLASS_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	cout << "CLASS_TEST\n";

	Cclass c;
	Cmain m;

	c.my_syntax();
	c.my_temp();
	m.my_temp();

	return 0;
}
#endif 
