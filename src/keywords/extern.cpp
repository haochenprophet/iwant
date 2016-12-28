#include "extern.h"
int Cextern::my_init(void *p)
{
	this->name = "Cextern";
	this->alias = "extern";
	return 0;
}

Cextern::Cextern()
{
	this->my_init();
}
