#include "operator.h"
int Coperator::my_init(void *p)
{
	this->name = "Coperator";
	this->alias = "operator";
	this->combination = Combination::none;
	this->op_priority = -1;//none priority
	this->comply = this;//Self-realization Interpreter
	return 0;
}

Coperator::Coperator()
{
	this->my_init();
}
