#include "dynamic_cast_operator.h"
int Cdynamic_cast_operator::my_init(void *p)
{
	this->name = "Cdynamic_cast_operator";
	this->alias = "dynamic_cast_operator";
	this->symbol = "dynamic_cast";
	this->op_priority = 2;
	this->combination = Combination::L2R;
	return 0;
}

Cdynamic_cast_operator::Cdynamic_cast_operator()
{
	this->my_init();
}

Cdynamic_cast_operator::~Cdynamic_cast_operator()
{

}

#ifndef DYNAMIC_CAST_OPERATOR_TEST
#define DYNAMIC_CAST_OPERATOR_TEST 0//1
#endif

#if DYNAMIC_CAST_OPERATOR_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "DYNAMIC_CAST_OPERATOR_TEST\n\n";

	return 0;
}
#endif 