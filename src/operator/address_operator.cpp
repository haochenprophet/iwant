#include "address_operator.h"
int Caddress_operator::my_init(void *p)
{
	this->name = "Caddress_operator";
	this->alias = "address_operator";
	this->symbol = "&";
	this->op_priority = 3;
	this->combination = Combination::R2L;
	return 0;
}

Caddress_operator::Caddress_operator()
{
	this->my_init();
}

Caddress_operator::~Caddress_operator()
{

}

#ifndef ADDRESS_OPERATOR_TEST
#define ADDRESS_OPERATOR_TEST 0//1
#endif

#if ADDRESS_OPERATOR_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ADDRESS_OPERATOR_TEST\n\n";

	return 0;
}
#endif 