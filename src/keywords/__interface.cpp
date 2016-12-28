#include "__interface.h"
int C__interface::my_init(void *p)
{
	this->name = "C__interface";
	this->alias = "__interface";
	return 0;
}

C__interface::C__interface()
{
	this->my_init();
}
