#include "__stdcall.h"
int C__stdcall::my_init(void *p)
{
	this->name = "C__stdcall";
	this->alias = "__stdcall";
	return 0;
}

C__stdcall::C__stdcall()
{
	this->my_init();
}
