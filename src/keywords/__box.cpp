#include "__box.h"
int C__box::my_init(void *p)
{
	this->name = "C__box";
	this->alias = "__box";
	return 0;
}

C__box::C__box()
{
	this->my_init();
}
