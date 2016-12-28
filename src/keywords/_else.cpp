#include "_else.h"
int C_else::my_init(void *p)
{
	this->name = "C_else";
	this->alias = "_else";
	return 0;
}

C_else::C_else()
{
	this->my_init();
}
