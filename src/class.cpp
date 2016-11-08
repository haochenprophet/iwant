#include "class.h"

Cclass::Cclass()
{
	this->name = "Cclass";
	this->alias = "class";
	this->syntax = CLASS_SYNTAX;
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

#define CLASS_TEST 0//1
#if CLASS_TEST
int main(int argc, char *argv[])
{

	return 0;
}
#endif 
