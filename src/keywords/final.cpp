#include "final.h"
int Cfinal::my_init(void *p)
{
	this->name = "Cfinal";
	this->alias = "final";
	return 0;
}

Cfinal::Cfinal()
{
	this->my_init();
}
