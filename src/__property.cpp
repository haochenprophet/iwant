#include "__property.h"
int C__property::my_init(void *p)
{
	this->name = "C__property";
	this->alias = "__property";
	return 0;
}

C__property::C__property()
{
	this->my_init();
}
