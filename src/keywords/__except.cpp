#include "__except.h"
int C__except::my_init(void *p)
{
	this->name = "C__except";
	this->alias = "__except";
	return 0;
}

C__except::C__except()
{
	this->my_init();
}
