#include "shift_left_assign.h"
int Cshift_left_assign::my_init(void *p)
{
	this->name = "Cshift_left_assign";
	this->alias = "shift_left_assign";
	this->symbol = "<<=";
	this->op_priority = 16;
	this->combination = Combination::R2L;
	return 0;
}

Cshift_left_assign::Cshift_left_assign()
{
	this->my_init();
}

Cshift_left_assign::~Cshift_left_assign()
{

}
