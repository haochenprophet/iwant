#include "shift_left_assign.h"
int Cshift_left_assign::my_init(void *p)
{
	this->name = "Cshift_left_assign";
	this->alias = "shift_left_assign";
	this->symbol = "<<=";
	return 0;
}

Cshift_left_assign::Cshift_left_assign()
{
	this->my_init();
}

Cshift_left_assign::~Cshift_left_assign()
{

}
