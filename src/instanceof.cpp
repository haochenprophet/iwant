#include "instanceof.h"
int Cinstanceof::my_init(void *p)
{
	this->name = "Cinstanceof";
	this->alias = "instanceof";
	return 0;
}

Cinstanceof::Cinstanceof()
{
	this->my_init();
}
