#include "__m128.h"
int C__m128::my_init(void *p)
{
	this->name = "C__m128";
	this->alias = "__m128";
	return 0;
}

C__m128::C__m128()
{
	this->my_init();
}
