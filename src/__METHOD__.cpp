#include "__METHOD__.h"
int C__METHOD__::my_init(void *p)
{
	this->name = "C__METHOD__";
	this->alias = "__METHOD__";
	return 0;
}

C__METHOD__::C__METHOD__()
{
	this->my_init();
}
