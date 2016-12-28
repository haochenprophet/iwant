#include "__TRAIT__.h"
int C__TRAIT__::my_init(void *p)
{
	this->name = "C__TRAIT__";
	this->alias = "__TRAIT__";
	return 0;
}

C__TRAIT__::C__TRAIT__()
{
	this->my_init();
}
