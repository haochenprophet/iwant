#include "addition.h"
int Caddition::my_init(void *p)
{
	this->name = "Caddition";
	this->alias = "addition";
	this->symbol = "+";
	this->op_priority = 6;
	this->combination = Combination::L2R;
	return 0;
}

Caddition::Caddition()
{
	this->my_init();
}

Caddition::~Caddition()
{

}
