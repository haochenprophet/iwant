#include "_define.h"
int C_define::my_init(void *p)
{
	this->name = "C_define";
	this->alias = "_define";
	return 0;
}

C_define::C_define()
{
	this->my_init();
}
