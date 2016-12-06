#include "__nogc.h"
int C__nogc::my_init(void *p)
{
	this->name = "C__nogc";
	this->alias = "__nogc";
	return 0;
}

C__nogc::C__nogc()
{
	this->my_init();
}
