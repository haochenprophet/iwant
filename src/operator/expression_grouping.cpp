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

#ifndef EXPRESSION_GROUPING_TEST
#define EXPRESSION_GROUPING_TEST 0//1
#endif

#if EXPRESSION_GROUPING_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "EXPRESSION_GROUPING_TEST\n\n";

	return 0;
}
#endif 