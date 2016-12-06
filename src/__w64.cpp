#include "__w64.h"
int C__w64::my_init(void *p)
{
	this->name = "C__w64";
	this->alias = "__w64";
	return 0;
}

C__w64::C__w64()
{
	this->my_init();
}
