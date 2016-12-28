#include "or.h"
int Cor::my_init(void *p)
{
	this->name = "Cor";
	this->alias = "or";
	return 0;
}

Cor::Cor()
{
	this->my_init();
}
