#include "synchronized.h"
int Csynchronized::my_init(void *p)
{
	this->name = "Csynchronized";
	this->alias = "synchronized";
	return 0;
}

Csynchronized::Csynchronized()
{
	this->my_init();
}
