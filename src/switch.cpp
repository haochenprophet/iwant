#include "switch.h"
int Cswitch::my_init(void *p)
{
	this->name = "Cswitch";
	this->alias = "switch";
	return 0;
}

Cswitch::Cswitch()
{
	this->my_init();
}
