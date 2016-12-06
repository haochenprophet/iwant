#include "__int64.h"
int C__int64::my_init(void *p)
{
	this->name = "C__int64";
	this->alias = "__int64";
	return 0;
}

C__int64::C__int64()
{
	this->my_init();
}
