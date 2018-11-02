#include "indirect_member_operator.h"
int Cindirect_member_operator::my_init(void *p)
{
	this->name = "Cindirect_member_operator";
	this->alias = "indirect_member_operator";
	this->alias = "->";
	this->op_priority = 2;
	this->combination = Combination::L2R;
	return 0;
}

Cindirect_member_operator::Cindirect_member_operator()
{
	this->my_init();
}

Cindirect_member_operator::~Cindirect_member_operator()
{

}

#ifndef INDIRECT_MEMBER_OPERATOR_TEST
#define INDIRECT_MEMBER_OPERATOR_TEST 0//1
#endif

#if INDIRECT_MEMBER_OPERATOR_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "INDIRECT_MEMBER_OPERATOR_TEST\n\n";

	return 0;
}
#endif 