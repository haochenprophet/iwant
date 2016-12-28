#include "__try_cast.h"
int C__try_cast::my_init(void *p)
{
	this->name = "C__try_cast";
	this->alias = "__try_cast";
	return 0;
}

C__try_cast::C__try_cast()
{
	this->my_init();
}
