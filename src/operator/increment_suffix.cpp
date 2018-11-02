#include "increment_suffix.h"
int Cincrement_suffix::my_init(void *p)
{
	this->name = "Cincrement_suffix";
	this->alias = "increment_suffix";
	this->symbol = "++";
	this->op_priority = 2;
	this->combination = Combination::L2R;
	return 0;
}

Cincrement_suffix::Cincrement_suffix()
{
	this->my_init();
}

Cincrement_suffix::~Cincrement_suffix()
{

}
