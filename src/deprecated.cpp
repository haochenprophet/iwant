#include "deprecated.h"
int Cdeprecated::my_init(void *p)
{
	this->name = "Cdeprecated";
	this->alias = "deprecated";
	return 0;
}

Cdeprecated::Cdeprecated()
{
	this->my_init();
}
