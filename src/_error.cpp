#include "_error.h"
int C_error::my_init(void *p)
{
	this->name = "C_error";
	this->alias = "_error";
	return 0;
}

C_error::C_error()
{
	this->my_init();
}
