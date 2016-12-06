#include "_ifndef.h"
int C_ifndef::my_init(void *p)
{
	this->name = "C_ifndef";
	this->alias = "_ifndef";
	return 0;
}

C_ifndef::C_ifndef()
{
	this->my_init();
}
