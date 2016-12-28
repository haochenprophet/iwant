#include "__FUNCTION__.h"
int C__FUNCTION__::my_init(void *p)
{
	this->name = "C__FUNCTION__";
	this->alias = "__FUNCTION__";
	return 0;
}

C__FUNCTION__::C__FUNCTION__()
{
	this->my_init();
}
