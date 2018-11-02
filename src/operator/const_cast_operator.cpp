#include "const_cast_operator.h"
int Cconst_cast_operator::my_init(void *p)
{
	this->name = "Cconst_cast_operator";
	this->alias = "const_cast_operator";
	this->symbol = "const_cast";
	this->op_priority = 2;
	this->combination = Combination::L2R;
	return 0;
}

Cconst_cast_operator::Cconst_cast_operator()
{
	this->my_init();
}

Cconst_cast_operator::~Cconst_cast_operator()
{

}

#ifndef CONST_CAST_OPERATOR_TEST
#define CONST_CAST_OPERATOR_TEST 0//1
#endif

#if CONST_CAST_OPERATOR_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "CONST_CAST_OPERATOR_TEST\n\n";

	return 0;
}
#endif 