#include "_undef.h"
int C_undef::my_init(void *p)
{
	this->name = "C_undef";
	this->alias = "_undef";
	return 0;
}

C_undef::C_undef()
{
	this->my_init();
}
