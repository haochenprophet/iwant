#include "substruction.h"
int Csubstruction::my_init(void *p)
{
	this->name = "Csubstruction";
	this->alias = "substruction";
	this->symbol = "-";
	this->op_priority = 6;
	this->combination = Combination::L2R;
	return 0;
}

Csubstruction::Csubstruction()
{
	this->my_init();
}

Csubstruction::~Csubstruction()
{

}
