#include "__raise.h"
int C__raise::my_init(void *p)
{
	this->name = "C__raise";
	this->alias = "__raise";
	return 0;
}

C__raise::C__raise()
{
	this->my_init();
}
