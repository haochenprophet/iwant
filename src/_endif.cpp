#include "_endif.h"
int C_endif::my_init(void *p)
{
	this->name = "C_endif";
	this->alias = "_endif";
	return 0;
}

C_endif::C_endif()
{
	this->my_init();
}
