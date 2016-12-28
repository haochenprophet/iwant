#include "bitand.h"
int Cbitand::my_init(void *p)
{
	this->name = "Cbitand";
	this->alias = "bitand";
	return 0;
}

Cbitand::Cbitand()
{
	this->my_init();
}
