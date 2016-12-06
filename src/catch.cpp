#include "catch.h"
int Ccatch::my_init(void *p)
{
	this->name = "Ccatch";
	this->alias = "catch";
	return 0;
}

Ccatch::Ccatch()
{
	this->my_init();
}
