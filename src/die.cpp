#include "die.h"
int Cdie::my_init(void *p)
{
	this->name = "Cdie";
	this->alias = "die";
	return 0;
}

Cdie::Cdie()
{
	this->my_init();
}
