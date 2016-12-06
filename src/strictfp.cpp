#include "strictfp.h"
int Cstrictfp::my_init(void *p)
{
	this->name = "Cstrictfp";
	this->alias = "strictfp";
	return 0;
}

Cstrictfp::Cstrictfp()
{
	this->my_init();
}
