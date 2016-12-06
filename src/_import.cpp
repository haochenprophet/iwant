#include "_import.h"
int C_import::my_init(void *p)
{
	this->name = "C_import";
	this->alias = "_import";
	return 0;
}

C_import::C_import()
{
	this->my_init();
}
