#include "symbol.h"
int Csymbol::my_init(void *p)
{
	this->name = "Csymbol";
	this->alias = "symbol";
	return 0;
}

Csymbol::Csymbol()
{
	this->my_init();
}
