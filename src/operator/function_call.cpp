#include "function_call.h"
int Cfunction_call::my_init(void *p)
{
	this->name = "Cfunction_call";
	this->alias = "function_call";
	this->symbol = "()";
	this->combination = Combination::L2R;
	this->op_priority = 2;
	return 0;
}

Cfunction_call::Cfunction_call()
{
	this->my_init();
}

Cfunction_call::~Cfunction_call()
{

}
