#include "__int8.h"
int C__int8::my_init(void *p)
{
	this->name = "C__int8";
	this->alias = "__int8";
	return 0;
}

C__int8::C__int8()
{
	this->my_init();
}
