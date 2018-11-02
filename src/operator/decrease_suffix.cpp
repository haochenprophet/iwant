#include "decrease_suffix.h"
int Cdecrease_suffix::my_init(void *p)
{
	this->name = "Cdecrease_suffix";
	this->alias = "decrease_suffix";
	this->symbol = "--";
	this->op_priority = 2;
	this->combination = Combination::L2R;
	return 0;
}

Cdecrease_suffix::Cdecrease_suffix()
{
	this->my_init();
}

Cdecrease_suffix::~Cdecrease_suffix()
{

}
