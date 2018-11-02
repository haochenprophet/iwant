#include "logic_or.h"
int Clogic_or::my_init(void *p)
{
	this->name = "Clogic_or";
	this->alias = "logic_or";
	this->symbol = "||";
	this->op_priority = 14;
	this->combination = Combination::L2R;
	return 0;
}

Clogic_or::Clogic_or()
{
	this->my_init();
}

Clogic_or::~Clogic_or()
{

}
