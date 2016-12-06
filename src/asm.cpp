#include "asm.h"
int Casm::my_init(void *p)
{
	this->name = "Casm";
	this->alias = "asm";
	return 0;
}

Casm::Casm()
{
	this->my_init();
}
