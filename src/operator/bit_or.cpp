#include "bit_or.h"
int Cbit_or::my_init(void *p)
{
	this->name = "Cbit_or";
	this->alias = "bit_or";
	this->symbol = "|";
	this->op_priority = 12;
	this->combination = Combination::L2R;
	return 0;
}

Cbit_or::Cbit_or()
{
	this->my_init();
}

Cbit_or::~Cbit_or()
{

}
