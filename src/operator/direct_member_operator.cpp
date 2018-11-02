#include "direct_member_operator.h"
int Cdirect_member_operator::my_init(void *p)
{
	this->name = "Cdirect_member_operator";
	this->alias = "direct_member_operator";
	this->alias = ".";
	this->op_priority = 2;
	this->combination = Combination::L2R;
	return 0;
}

Cdirect_member_operator::Cdirect_member_operator()
{
	this->my_init();
}

Cdirect_member_operator::~Cdirect_member_operator()
{

}

#ifndef DIRECT_MEMBER_OPERATOR_TEST
#define DIRECT_MEMBER_OPERATOR_TEST 0//1
#endif

#if DIRECT_MEMBER_OPERATOR_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "DIRECT_MEMBER_OPERATOR_TEST\n\n";

	return 0;
}
#endif 