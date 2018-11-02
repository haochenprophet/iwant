#include "dereference_operator.h"
int Cdereference_operator::my_init(void *p)
{
	this->name = "Cdereference_operator";
	this->alias = "dereference_operator";
	this->symbol = "*";
	this->op_priority = 3;
	this->combination = Combination::R2L;
	return 0;
}

Cdereference_operator::Cdereference_operator()
{
	this->my_init();
}

Cdereference_operator::~Cdereference_operator()
{

}
