#include "__forceinline.h"
int C__forceinline::my_init(void *p)
{
	this->name = "C__forceinline";
	this->alias = "__forceinline";
	return 0;
}

C__forceinline::C__forceinline()
{
	this->my_init();
}
