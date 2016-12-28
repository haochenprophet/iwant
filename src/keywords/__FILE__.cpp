#include "__FILE__.h"
int C__FILE__::my_init(void *p)
{
	this->name = "C__FILE__";
	this->alias = "__FILE__";
	return 0;
}

C__FILE__::C__FILE__()
{
	this->my_init();
}
