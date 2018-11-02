#include "const_cast_operator.h"
int Cconst_cast_operator::my_init(void *p)
{
	this->name = "Cconst_cast_operator";
	this->alias = "const_cast_operator";
	this->symbol = "const_cast";
	this->op_priority = 2;
	this->combination = Combination::L2R;
	return 0;
}

Cconst_cast_operator::Cconst_cast_operator()
{
	this->my_init();
}

Cconst_cast_operator::~Cconst_cast_operator()
{

}
