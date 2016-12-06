#include "abstract.h"
int Cabstract::my_init(void *p)
{
	this->name = "Cabstract";
	this->alias = "abstract";
	return 0;
}

Cabstract::Cabstract()
{
	this->my_init();
}
