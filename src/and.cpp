#include "and.h"
int Cand::my_init(void *p)
{
	this->name = "Cand";
	this->alias = "and";
	return 0;
}

Cand::Cand()
{
	this->my_init();
}
