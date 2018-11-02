#include "conditional_operator.h"
int Cconditional_operator::my_init(void *p)
{
	this->name = "Cconditional_operator";
	this->alias = "conditional_operator";
	this->symbol = "exp?exp:exp";
	this->op_priority = 15;
	this->combination = Combination::R2L;
	return 0;
}

Cconditional_operator::Cconditional_operator()
{
	this->my_init();
}

Cconditional_operator::~Cconditional_operator()
{

}
