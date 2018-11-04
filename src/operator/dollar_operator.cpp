#include "dollar_operator.h"
int Cdollar_operator::my_init(void *p)
{
	this->name = "Cdollar_operator";
	this->alias = "dollar_operator";
	return 0;
}

Cdollar_operator::Cdollar_operator()
{
	this->my_init();
}

Cdollar_operator::~Cdollar_operator()
{

}

#ifndef DOLLAR_OPERATOR_TEST
#define DOLLAR_OPERATOR_TEST 0//1
#endif

#if DOLLAR_OPERATOR_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "DOLLAR_OPERATOR_TEST\n\n";

	return 0;
}
#endif 