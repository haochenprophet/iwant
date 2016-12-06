#include "in.h"
int Cin::my_init(void *p)
{
	this->name = "Cin";
	this->alias = "in";
	return 0;
}

Cin::Cin()
{
	this->my_init();
}
