#include "initonly.h"
int Cinitonly::my_init(void *p)
{
	this->name = "Cinitonly";
	this->alias = "initonly";
	return 0;
}

Cinitonly::Cinitonly()
{
	this->my_init();
}
