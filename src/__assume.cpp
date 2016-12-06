#include "__assume.h"
int C__assume::my_init(void *p)
{
	this->name = "C__assume";
	this->alias = "__assume";
	return 0;
}

C__assume::C__assume()
{
	this->my_init();
}
