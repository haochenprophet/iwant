#include "with.h"
int Cwith::my_init(void *p)
{
	this->name = "Cwith";
	this->alias = "with";
	return 0;
}

Cwith::Cwith()
{
	this->my_init();
}
