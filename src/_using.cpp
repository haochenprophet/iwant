#include "_using.h"
int C_using::my_init(void *p)
{
	this->name = "C_using";
	this->alias = "_using";
	return 0;
}

C_using::C_using()
{
	this->my_init();
}
