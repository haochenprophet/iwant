#include "__leave.h"
int C__leave::my_init(void *p)
{
	this->name = "C__leave";
	this->alias = "__leave";
	return 0;
}

C__leave::C__leave()
{
	this->my_init();
}
