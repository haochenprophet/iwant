#include "__try__except.h"
int C__try__except::my_init(void *p)
{
	this->name = "C__try__except";
	this->alias = "__try__except";
	return 0;
}

C__try__except::C__try__except()
{
	this->my_init();
}
