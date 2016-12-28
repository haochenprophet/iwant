#include "endforeach.h"
int Cendforeach::my_init(void *p)
{
	this->name = "Cendforeach";
	this->alias = "endforeach";
	return 0;
}

Cendforeach::Cendforeach()
{
	this->my_init();
}
