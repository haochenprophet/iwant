#include "__event.h"
int C__event::my_init(void *p)
{
	this->name = "C__event";
	this->alias = "__event";
	return 0;
}

C__event::C__event()
{
	this->my_init();
}
