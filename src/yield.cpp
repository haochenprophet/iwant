#include "yield.h"
int Cyield::my_init(void *p)
{
	this->name = "Cyield";
	this->alias = "yield";
	return 0;
}

Cyield::Cyield()
{
	this->my_init();
}
