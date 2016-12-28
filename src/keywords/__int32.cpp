#include "__int32.h"
int C__int32::my_init(void *p)
{
	this->name = "C__int32";
	this->alias = "__int32";
	return 0;
}

C__int32::C__int32()
{
	this->my_init();
}
