#include "__uuidof.h"
int C__uuidof::my_init(void *p)
{
	this->name = "C__uuidof";
	this->alias = "__uuidof";
	return 0;
}

C__uuidof::C__uuidof()
{
	this->my_init();
}
