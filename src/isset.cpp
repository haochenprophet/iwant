#include "isset.h"
int Cisset::my_init(void *p)
{
	this->name = "Cisset";
	this->alias = "isset";
	return 0;
}

Cisset::Cisset()
{
	this->my_init();
}
