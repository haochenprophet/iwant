#include "__halt_compiler.h"
int C__halt_compiler::my_init(void *p)
{
	this->name = "C__halt_compiler";
	this->alias = "__halt_compiler";
	return 0;
}

C__halt_compiler::C__halt_compiler()
{
	this->my_init();
}
