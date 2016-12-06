#include "raise.h"
int Craise::my_init(void *p)
{
	this->name = "Craise";
	this->alias = "raise";
	return 0;
}

Craise::Craise()
{
	this->my_init();
}
