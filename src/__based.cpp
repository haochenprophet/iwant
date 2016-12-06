#include "__based.h"
int C__based::my_init(void *p)
{
	this->name = "C__based";
	this->alias = "__based";
	return 0;
}

C__based::C__based()
{
	this->my_init();
}
