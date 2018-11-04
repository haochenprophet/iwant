#include "operator.h"
int Coperator::my_init(void *p)
{
	this->package = "operator";
	this->name = "Coperator";
	this->alias = "operator";
	this->combination = Combination::none;
	this->op_priority = -1;//none priority
	this->comply = this;//Self-realization Interpreter
	return 0;
}

Coperator::Coperator()
{
	this->my_init();
}

#ifndef OPERATOR_TEST
#define OPERATOR_TEST 0//1
#endif

#if OPERATOR_TEST
#include "operator_all_h_include.h"
#include "operator_g_code.i"
int main(int argc, char *argv[])
{
	std::cout << "OPERATOR_TEST\n\n";

	return 0;
}
#endif 