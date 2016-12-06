#include "as.h"
int Cas::my_init(void *p)
{
	this->name = "Cas";
	this->alias = "as";
	return 0;
}

Cas::Cas()
{
	this->my_init();
}
