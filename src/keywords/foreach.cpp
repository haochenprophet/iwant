#include "foreach.h"
int Cforeach::my_init(void *p)
{
	this->name = "Cforeach";
	this->alias = "foreach";
	return 0;
}

Cforeach::Cforeach()
{
	this->my_init();
}
