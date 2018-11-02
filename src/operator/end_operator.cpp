#include "end_operator.h"
int Cend_operator::my_init(void *p)
{
	this->name = "Cend_operator";
	this->alias = "end_operator";
	this->symbol = "";
	this->op_priority = -1;
	this->combination = Combination::none;
	return 0;
}

Cend_operator::Cend_operator()
{
	this->my_init();
}

Cend_operator::~Cend_operator()
{

}

#ifndef END_OPERATOR_TEST
#define END_OPERATOR_TEST 0//1
#endif

#if END_OPERATOR_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "END_OPERATOR_TEST\n\n";

	return 0;
}
#endif 