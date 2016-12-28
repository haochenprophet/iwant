#include "__thiscall.h"
int C__thiscall::my_init(void *p)
{
	this->name = "C__thiscall";
	this->alias = "__thiscall";
	return 0;
}

C__thiscall::C__thiscall()
{
	this->my_init();
}
