#include "__gc.h"
int C__gc::my_init(void *p)
{
	this->name = "C__gc";
	this->alias = "__gc";
	return 0;
}

C__gc::C__gc()
{
	this->my_init();
}
