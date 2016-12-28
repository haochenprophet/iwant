#include "atomic_cancel.h"
int Catomic_cancel::my_init(void *p)
{
	this->name = "Catomic_cancel";
	this->alias = "atomic_cancel";
	return 0;
}

Catomic_cancel::Catomic_cancel()
{
	this->my_init();
}
