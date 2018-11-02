#include "divide_assign.h"
int Cdivide_assign::my_init(void *p)
{
	this->name = "Cdivide_assign";
	this->alias = "divide_assign";
	this->symbol = "/=";
	this->op_priority = 16;
	this->combination = Combination::R2L;
	return 0;
}

Cdivide_assign::Cdivide_assign()
{
	this->my_init();
}

Cdivide_assign::~Cdivide_assign()
{

}
