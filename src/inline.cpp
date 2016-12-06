#include "inline.h"
int Cinline::my_init(void *p)
{
	this->name = "Cinline";
	this->alias = "inline";
	return 0;
}

Cinline::Cinline()
{
	this->my_init();
}
