#include "conditional_operator.h"
int Cconditional_operator::my_init(void *p)
{
	this->name = "Cconditional_operator";
	this->alias = "conditional_operator";
	this->symbol = "exp?exp:exp";
	this->op_priority = 15;
	this->combination = Combination::R2L;
	return 0;
}

Cconditional_operator::Cconditional_operator()
{
	this->my_init();
}

Cconditional_operator::~Cconditional_operator()
{

}

#ifndef CONDITIONAL_OPERATOR_TEST
#define CONDITIONAL_OPERATOR_TEST 0//1
#endif

#if CONDITIONAL_OPERATOR_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "CONDITIONAL_OPERATOR_TEST\n\n";

	return 0;
}
#endif 