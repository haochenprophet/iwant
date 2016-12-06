#include "__LINE__.h"
int C__LINE__::my_init(void *p)
{
	this->name = "C__LINE__";
	this->alias = "__LINE__";
	return 0;
}

C__LINE__::C__LINE__()
{
	this->my_init();
}
