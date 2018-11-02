#include "multiply_assign.h"
int Cmultiply_assign::my_init(void *p)
{
	this->name = "Cmultiply_assign";
	this->alias = "multiply_assign";
	this->symbol = "*=";
	this->op_priority = 16;
	this->combination = Combination::R2L;
	return 0;
}

Cmultiply_assign::Cmultiply_assign()
{
	this->my_init();
}

Cmultiply_assign::~Cmultiply_assign()
{

}
