#include "throw_operator.h"
int Cthrow_operator::my_init(void *p)
{
	this->name = "Cthrow_operator";
	this->alias = "throw";
	this->symbol = "throw";
	this->op_priority = 17;
	this->combination = Combination::L2R;
	return 0;
}

Cthrow_operator::Cthrow_operator()
{
	this->my_init();
}

Cthrow_operator::~Cthrow_operator()
{

}

#ifndef THROW_OPERATOR_TEST
#define THROW_OPERATOR_TEST 0//1
#endif

#if THROW_OPERATOR_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "THROW_OPERATOR_TEST\n\n";

	return 0;
}
#endif 