#include "pass.h"
int Cpass::my_init(void *p)
{
	this->name = "Cpass";
	this->alias = "pass";
	return 0;
}

Cpass::Cpass()
{
	this->my_init();
}
