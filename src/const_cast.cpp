#include "const_cast.h"
int Cconst_cast::my_init(void *p)
{
	this->name = "Cconst_cast";
	this->alias = "const_cast";
	return 0;
}

Cconst_cast::Cconst_cast()
{
	this->my_init();
}
