#include "new_noinline.h"
int Cnew_noinline::my_init(void *p)
{
	this->name = "Cnew_noinline";
	this->alias = "new_noinline";
	return 0;
}

Cnew_noinline::Cnew_noinline()
{
	this->my_init();
}
