#include "enddeclare.h"
int Cenddeclare::my_init(void *p)
{
	this->name = "Cenddeclare";
	this->alias = "enddeclare";
	return 0;
}

Cenddeclare::Cenddeclare()
{
	this->my_init();
}
