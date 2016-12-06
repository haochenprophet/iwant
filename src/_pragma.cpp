#include "_pragma.h"
int C_pragma::my_init(void *p)
{
	this->name = "C_pragma";
	this->alias = "_pragma";
	return 0;
}

C_pragma::C_pragma()
{
	this->my_init();
}
