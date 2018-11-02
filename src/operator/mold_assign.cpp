#include "mold_assign.h"
int Cmold_assign::my_init(void *p)
{
	this->name = "Cmold_assign";
	this->alias = "mold_assign";
	this->symbol = "%=";
	this->op_priority = 16;
	this->combination = Combination::R2L;
	return 0;
}

Cmold_assign::Cmold_assign()
{
	this->my_init();
}

Cmold_assign::~Cmold_assign()
{

}
