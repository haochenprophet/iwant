#include "False.h"
int CFalse::my_init(void *p)
{
	this->name = "CFalse";
	this->alias = "False";
	return 0;
}

CFalse::CFalse()
{
	this->my_init();
}
