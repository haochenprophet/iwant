#include "declare.h"
int Cdeclare::my_init(void *p)
{
	this->name = "Cdeclare";
	this->alias = "declare";
	return 0;
}

Cdeclare::Cdeclare()
{
	this->my_init();
}
