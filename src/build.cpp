#include "build.h"
int Cbuild::my_init(void *p)
{
	this->name = "Cbuild";
	this->alias = "build";
	return 0;
}

Cbuild::Cbuild()
{
	this->my_init();
}
