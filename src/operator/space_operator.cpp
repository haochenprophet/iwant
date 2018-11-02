#include "space_operator.h"
int Cspace_operator::my_init(void *p)
{
	this->name = "Cspace_operator";
	this->alias = "space_operator";
	this->symbol = " \t";
	this->op_priority = -1;
	this->combination = Combination::none;
	return 0;
}

Cspace_operator::Cspace_operator()
{
	this->my_init();
}

Cspace_operator::~Cspace_operator()
{

}
