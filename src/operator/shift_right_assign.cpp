#include "shift_right_assign.h"
int Cshift_right_assign::my_init(void *p)
{
	this->name = "Cshift_right_assign";
	this->alias = "shift_right_assign";
	this->symbol = ">>=";
	this->op_priority = 16;
	this->combination = Combination::R2L;
	return 0;
}

Cshift_right_assign::Cshift_right_assign()
{
	this->my_init();
}

Cshift_right_assign::~Cshift_right_assign()
{

}
