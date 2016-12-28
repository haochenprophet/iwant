#include "event.h"
int Cevent::my_init(void *p)
{
	this->name = "Cevent";
	this->alias = "event";
	return 0;
}

Cevent::Cevent()
{
	this->my_init();
}
