#include "bool.h"
int Cbool::my_init(void *p)
{
	this->name = "Cbool";
	this->alias = "bool";
	return 0;
}

Cbool::Cbool()
{
	this->my_init();
}
