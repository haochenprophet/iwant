#include "__alignof.h"
int C__alignof::my_init(void *p)
{
	this->name = "C__alignof";
	this->alias = "__alignof";
	return 0;
}

C__alignof::C__alignof()
{
	this->my_init();
}
