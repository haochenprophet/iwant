#include "safecast.h"
int Csafecast::my_init(void *p)
{
	this->name = "Csafecast";
	this->alias = "safecast";
	return 0;
}

Csafecast::Csafecast()
{
	this->my_init();
}
