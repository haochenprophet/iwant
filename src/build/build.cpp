#include "build.h"
#include "build_action.i"

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
