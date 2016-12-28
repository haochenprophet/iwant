#include "__finally.h"
int C__finally::my_init(void *p)
{
	this->name = "C__finally";
	this->alias = "__finally";
	return 0;
}

C__finally::C__finally()
{
	this->my_init();
}
