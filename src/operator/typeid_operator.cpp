#include "typeid_operator.h"
int Ctypeid_operator::my_init(void *p)
{
	this->name = "Ctypeid_operator";
	this->alias = "typeid_operator";
	this->symbol = "typeid";
	this->op_priority = 2;
	this->combination = Combination::L2R;
	return 0;
}

Ctypeid_operator::Ctypeid_operator()
{
	this->my_init();
}

Ctypeid_operator::~Ctypeid_operator()
{

}

#ifndef TYPEID_OPERATOR_TEST
#define TYPEID_OPERATOR_TEST 0//1
#endif

#if TYPEID_OPERATOR_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "TYPEID_OPERATOR_TEST\n\n";

	return 0;
}
#endif 