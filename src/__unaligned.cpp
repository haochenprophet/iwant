#include "__unaligned.h"
int C__unaligned::my_init(void *p)
{
	this->name = "C__unaligned";
	this->alias = "__unaligned";
	return 0;
}

C__unaligned::C__unaligned()
{
	this->my_init();
}
