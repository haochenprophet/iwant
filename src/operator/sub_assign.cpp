#include "sub_assign.h"
int Csub_assign::my_init(void *p)
{
	this->name = "Csub_assign";
	this->alias = "sub_assign";
	this->symbol = "-=";
	this->op_priority = 16;
	this->combination = Combination::R2L;
	return 0;
}

Csub_assign::Csub_assign()
{
	this->my_init();
}

Csub_assign::~Csub_assign()
{

}
