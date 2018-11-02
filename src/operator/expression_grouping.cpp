#include "expression_grouping.h"
int Cexpression_grouping::my_init(void *p)
{
	this->name = "Cexpression_grouping";
	this->alias = "expression_grouping";
	this->symbol = "(exp)";//exp:expression
	this->op_priority = 2;
	this->combination = Combination::L2R;
	return 0;
}

Cexpression_grouping::Cexpression_grouping()
{
	this->my_init();
}

Cexpression_grouping::~Cexpression_grouping()
{

}
