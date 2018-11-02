#include "scope_operator.h"
int Cscope_operator::my_init(void *p)
{
	this->name = "Cscope_operator";
	this->alias = "scope_operator";
	this->symbol = "::";
	this->op_priority = 1;
	return 0;
}

Cscope_operator::Cscope_operator()
{
	this->my_init();
}

Cscope_operator::~Cscope_operator()
{

}

#ifndef SCOPE_OPERATOR_TEST
#define SCOPE_OPERATOR_TEST 0//1
#endif

#if SCOPE_OPERATOR_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "SCOPE_OPERATOR_TEST\n\n";

	return 0;
}
#endif 