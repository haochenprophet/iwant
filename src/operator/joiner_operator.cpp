#include "joiner_operator.h"
int Cjoiner_operator::my_init(void *p)
{
	this->name = "Cjoiner_operator";
	this->alias = "joiner_operator";
	this->symbol = "\\";
	this->op_priority = 20;
	this->combination = Combination::R2L;
	return 0;
}

Cjoiner_operator::Cjoiner_operator()
{
	this->my_init();
}

Cjoiner_operator::~Cjoiner_operator()
{

}

#ifndef JOINER_OPERATOR_TEST
#define JOINER_OPERATOR_TEST 0//1
#endif

#if JOINER_OPERATOR_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "JOINER_OPERATOR_TEST\n\n";

	return 0;
}
#endif 