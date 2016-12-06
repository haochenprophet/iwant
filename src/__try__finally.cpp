#include "__try__finally.h"
int C__try__finally::my_init(void *p)
{
	this->name = "C__try__finally";
	this->alias = "__try__finally";
	return 0;
}

C__try__finally::C__try__finally()
{
	this->my_init();
}
