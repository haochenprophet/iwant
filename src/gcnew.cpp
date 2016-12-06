#include "gcnew.h"
int Cgcnew::my_init(void *p)
{
	this->name = "Cgcnew";
	this->alias = "gcnew";
	return 0;
}

Cgcnew::Cgcnew()
{
	this->my_init();
}
