#include "sizeof_operator.h"
int Csizeof_operator::my_init(void *p)
{
	this->name = "Csizeof_operator";
	this->alias = "sizeof_operator";
	this->symbol = "sizeof";
	this->op_priority = 3;
	this->combination = Combination::R2L;
	return 0;
}

Csizeof_operator::Csizeof_operator()
{
	this->my_init();
}

Csizeof_operator::~Csizeof_operator()
{

}

#ifndef SIZEOF_OPERATOR_TEST
#define SIZEOF_OPERATOR_TEST 0//1
#endif

#if SIZEOF_OPERATOR_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "SIZEOF_OPERATOR_TEST\n\n";

	return 0;
}
#endif 