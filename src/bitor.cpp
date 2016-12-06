#include "bitor.h"
int Cbitor::my_init(void *p)
{
	this->name = "Cbitor";
	this->alias = "bitor";
	return 0;
}

Cbitor::Cbitor()
{
	this->my_init();
}
