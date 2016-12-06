#include "alignof.h"
int Calignof::my_init(void *p)
{
	this->name = "Calignof";
	this->alias = "alignof";
	return 0;
}

Calignof::Calignof()
{
	this->my_init();
}
