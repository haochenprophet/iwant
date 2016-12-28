#include "selectany.h"
int Cselectany::my_init(void *p)
{
	this->name = "Cselectany";
	this->alias = "selectany";
	return 0;
}

Cselectany::Cselectany()
{
	this->my_init();
}
