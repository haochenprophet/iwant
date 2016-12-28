#include "global.h"
int Cglobal::my_init(void *p)
{
	this->name = "Cglobal";
	this->alias = "global";
	return 0;
}

Cglobal::Cglobal()
{
	this->my_init();
}
