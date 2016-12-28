#include "__abstract.h"
int C__abstract::my_init(void *p)
{
	this->name = "C__abstract";
	this->alias = "__abstract";
	return 0;
}

C__abstract::C__abstract()
{
	this->my_init();
}
