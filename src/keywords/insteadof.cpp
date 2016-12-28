#include "insteadof.h"
int Cinsteadof::my_init(void *p)
{
	this->name = "Cinsteadof";
	this->alias = "insteadof";
	return 0;
}

Cinsteadof::Cinsteadof()
{
	this->my_init();
}
