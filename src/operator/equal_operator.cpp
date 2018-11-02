#include "equal_operator.h"
int Cequal_operator::my_init(void *p)
{
	this->name = "Cequal_operator";
	this->alias = "equal_operator";
	this->symbol = "==";
	this->op_priority = 9;
	this->combination = Combination::L2R;
	return 0;
}

Cequal_operator::Cequal_operator()
{
	this->my_init();
}

Cequal_operator::~Cequal_operator()
{

}
