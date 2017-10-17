#include "_register.h"
int C_register::my_init(void *p)
{
	this->name = "Cregister";
	this->alias = "register";//note refer: src/register.cpp
	return 0;
}

C_register::C_register()
{
	this->my_init();
}
