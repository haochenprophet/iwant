#include "__sealed.h"
int C__sealed::my_init(void *p)
{
	this->name = "C__sealed";
	this->alias = "__sealed";
	return 0;
}

C__sealed::C__sealed()
{
	this->my_init();
}
