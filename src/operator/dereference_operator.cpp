#include "dereference_operator.h"
int Cdereference_operator::my_init(void *p)
{
	this->name = "Cdereference_operator";
	this->alias = "dereference_operator";
	this->symbol = "*";
	this->op_priority = 3;
	this->combination = Combination::R2L;
	return 0;
}

Cdereference_operator::Cdereference_operator()
{
	this->my_init();
}

Cdereference_operator::~Cdereference_operator()
{

}

#ifndef DEREFERENCE_OPERATOR_TEST
#define DEREFERENCE_OPERATOR_TEST 0//1
#endif

#if DEREFERENCE_OPERATOR_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "DEREFERENCE_OPERATOR_TEST\n\n";

	return 0;
}
#endif 