#include "bit_and_assign.h"
int Cbit_and_assign::my_init(void *p)
{
	this->name = "Cbit_and_assign";
	this->alias = "bit_and_assign";
	this->symbol = "&=";
	this->op_priority = 16;
	this->combination = Combination::R2L;
	return 0;
}

Cbit_and_assign::Cbit_and_assign()
{
	this->my_init();
}

Cbit_and_assign::~Cbit_and_assign()
{

}
