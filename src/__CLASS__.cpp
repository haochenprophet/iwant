#include "__CLASS__.h"
int C__CLASS__::my_init(void *p)
{
	this->name = "C__CLASS__";
	this->alias = "__CLASS__";
	return 0;
}

C__CLASS__::C__CLASS__()
{
	this->my_init();
}
