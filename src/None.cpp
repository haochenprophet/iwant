#include "None.h"
int CNone::my_init(void *p)
{
	this->name = "CNone";
	this->alias = "None";
	return 0;
}

CNone::CNone()
{
	this->my_init();
}
