#include "__fastcall.h"
int C__fastcall::my_init(void *p)
{
	this->name = "C__fastcall";
	this->alias = "__fastcall";
	return 0;
}

C__fastcall::C__fastcall()
{
	this->my_init();
}
