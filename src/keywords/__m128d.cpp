#include "__m128d.h"
int C__m128d::my_init(void *p)
{
	this->name = "C__m128d";
	this->alias = "__m128d";
	return 0;
}

C__m128d::C__m128d()
{
	this->my_init();
}
