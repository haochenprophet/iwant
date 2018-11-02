#include "conditional_operator.h"
int Cconditional_operator::my_init(void *p)
{
	this->name = "Cconditional_operator";
	this->alias = "conditional_operator";
	this->symbol = ":?";
	return 0;
}

Cconditional_operator::Cconditional_operator()
{
	this->my_init();
}

Cconditional_operator::~Cconditional_operator()
{

}
