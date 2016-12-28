#include "_include.h"
int C_include::my_init(void *p)
{
	this->name = "C_include";
	this->alias = "_include";
	return 0;
}

C_include::C_include()
{
	this->my_init();
}
