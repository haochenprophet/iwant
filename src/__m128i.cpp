#include "__m128i.h"
int C__m128i::my_init(void *p)
{
	this->name = "C__m128i";
	this->alias = "__m128i";
	return 0;
}

C__m128i::C__m128i()
{
	this->my_init();
}
