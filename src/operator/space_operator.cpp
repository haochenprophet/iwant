#include "space_operator.h"
int Cspace_operator::my_init(void *p)
{
	this->name = "Cspace_operator";
	this->alias = "space_operator";
	this->symbol = " \t";
	this->op_priority = -1;
	this->combination = Combination::none;
	return 0;
}

Cspace_operator::Cspace_operator()
{
	this->my_init();
}

Cspace_operator::~Cspace_operator()
{

}

#ifndef SPACE_OPERATOR_TEST
#define SPACE_OPERATOR_TEST 0//1
#endif

#if SPACE_OPERATOR_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "SPACE_OPERATOR_TEST\n\n";

	return 0;
}
#endif 