#include "__NAMESPACE__.h"
int C__NAMESPACE__::my_init(void *p)
{
	this->name = "C__NAMESPACE__";
	this->alias = "__NAMESPACE__";
	return 0;
}

C__NAMESPACE__::C__NAMESPACE__()
{
	this->my_init();
}
