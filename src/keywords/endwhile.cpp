#include "endwhile.h"
int Cendwhile::my_init(void *p)
{
	this->name = "Cendwhile";
	this->alias = "endwhile";
	return 0;
}

Cendwhile::Cendwhile()
{
	this->my_init();
}
