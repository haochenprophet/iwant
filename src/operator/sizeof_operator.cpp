#include "sizeof_operator.h"
int Csizeof_operator::my_init(void *p)
{
	this->name = "Csizeof_operator";
	this->alias = "sizeof_operator";
	this->symbol = "sizeof";
	this->op_priority = 3;
	this->combination = Combination::R2L;
	return 0;
}

Csizeof_operator::Csizeof_operator()
{
	this->my_init();
}

Csizeof_operator::~Csizeof_operator()
{

}
