#include "nonlocal.h"
int Cnonlocal::my_init(void *p)
{
	this->name = "Cnonlocal";
	this->alias = "nonlocal";
	return 0;
}

Cnonlocal::Cnonlocal()
{
	this->my_init();
}
