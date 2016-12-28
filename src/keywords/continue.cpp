#include "continue.h"
int Ccontinue::my_init(void *p)
{
	this->name = "Ccontinue";
	this->alias = "continue";
	return 0;
}

Ccontinue::Ccontinue()
{
	this->my_init();
}
