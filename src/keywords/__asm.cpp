#include "__asm.h"
int C__asm::my_init(void *p)
{
	this->name = "C__asm";
	this->alias = "__asm";
	return 0;
}

C__asm::C__asm()
{
	this->my_init();
}
