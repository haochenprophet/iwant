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

#ifndef EQUAL_OPERATOR_TEST
#define EQUAL_OPERATOR_TEST 0//1
#endif

#if EQUAL_OPERATOR_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "EQUAL_OPERATOR_TEST\n\n";

	return 0;
}
#endif 