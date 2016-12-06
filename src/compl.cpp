#include "compl.h"
int Ccompl::my_init(void *p)
{
	this->name = "Ccompl";
	this->alias = "compl";
	return 0;
}

Ccompl::Ccompl()
{
	this->my_init();
}
