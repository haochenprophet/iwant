#include "_if.h"
int C_if::my_init(void *p)
{
	this->name = "C_if";
	this->alias = "_if";
	return 0;
}

C_if::C_if()
{
	this->my_init();
}
