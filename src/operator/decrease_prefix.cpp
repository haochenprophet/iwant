#include "decrease_prefix.h"
int Cdecrease_prefix::my_init(void *p)
{
	this->name = "Cdecrease_prefix";
	this->alias = "decrease_prefix";
	this->symbol = "--";
	this->op_priority = 3;
	this->combination = Combination::R2L;
	return 0;
}

Cdecrease_prefix::Cdecrease_prefix()
{
	this->my_init();
}

Cdecrease_prefix::~Cdecrease_prefix()
{

}
