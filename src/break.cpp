#include "break.h"
int Cbreak::my_init(void *p)
{
	this->name = "Cbreak";
	this->alias = "break";
	return 0;
}

Cbreak::Cbreak()
{
	this->my_init();
}
