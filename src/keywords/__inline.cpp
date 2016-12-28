#include "__inline.h"
int C__inline::my_init(void *p)
{
	this->name = "C__inline";
	this->alias = "__inline";
	return 0;
}

C__inline::C__inline()
{
	this->my_init();
}
