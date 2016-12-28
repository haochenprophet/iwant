#include "char.h"
int Cchar::my_init(void *p)
{
	this->name = "Cchar";
	this->alias = "char";
	return 0;
}

Cchar::Cchar()
{
	this->my_init();
}
