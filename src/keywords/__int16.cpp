#include "__int16.h"
int C__int16::my_init(void *p)
{
	this->name = "C__int16";
	this->alias = "__int16";
	return 0;
}

C__int16::C__int16()
{
	this->my_init();
}
