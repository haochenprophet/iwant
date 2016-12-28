#include "__unhook.h"
int C__unhook::my_init(void *p)
{
	this->name = "C__unhook";
	this->alias = "__unhook";
	return 0;
}

C__unhook::C__unhook()
{
	this->my_init();
}
