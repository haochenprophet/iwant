#include "__m64.h"
int C__m64::my_init(void *p)
{
	this->name = "C__m64";
	this->alias = "__m64";
	return 0;
}

C__m64::C__m64()
{
	this->my_init();
}
