#include "sealed.h"
int Csealed::my_init(void *p)
{
	this->name = "Csealed";
	this->alias = "sealed";
	return 0;
}

Csealed::Csealed()
{
	this->my_init();
}
