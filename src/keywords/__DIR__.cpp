#include "__DIR__.h"
int C__DIR__::my_init(void *p)
{
	this->name = "C__DIR__";
	this->alias = "__DIR__";
	return 0;
}

C__DIR__::C__DIR__()
{
	this->my_init();
}
