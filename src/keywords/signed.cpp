#include "signed.h"
int Csigned::my_init(void *p)
{
	this->name = "Csigned";
	this->alias = "signed";
	return 0;
}

Csigned::Csigned()
{
	this->my_init();
}
