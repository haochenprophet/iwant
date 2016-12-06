#include "endswitch.h"
int Cendswitch::my_init(void *p)
{
	this->name = "Cendswitch";
	this->alias = "endswitch";
	return 0;
}

Cendswitch::Cendswitch()
{
	this->my_init();
}
