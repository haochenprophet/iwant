#include "define.h"
int Cdefine::my_init(void *p)
{
	this->name = "Cdefine";
	this->alias = "define";
	return 0;
}

Cdefine::Cdefine()
{
	this->my_init();
}
