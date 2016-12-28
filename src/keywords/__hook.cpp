#include "__hook.h"
int C__hook::my_init(void *p)
{
	this->name = "C__hook";
	this->alias = "__hook";
	return 0;
}

C__hook::C__hook()
{
	this->my_init();
}
