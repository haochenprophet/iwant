#include "typeid.h"
int Ctypeid::my_init(void *p)
{
	this->name = "Ctypeid";
	this->alias = "typeid";
	return 0;
}

Ctypeid::Ctypeid()
{
	this->my_init();
}
