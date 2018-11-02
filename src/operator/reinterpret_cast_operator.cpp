#include "reinterpret_cast_operator.h"
int Creinterpret_cast_operator::my_init(void *p)
{
	this->name = "Creinterpret_cast_operator";
	this->alias = "reinterpret_cast_operator";
	this->symbol = "reinterpret_cast";
	this->op_priority = 2;
	this->combination = Combination::L2R;
	return 0;
}

Creinterpret_cast_operator::Creinterpret_cast_operator()
{
	this->my_init();
}

Creinterpret_cast_operator::~Creinterpret_cast_operator()
{

}

#ifndef REINTERPRET_CAST_OPERATOR_TEST
#define REINTERPRET_CAST_OPERATOR_TEST 0//1
#endif

#if REINTERPRET_CAST_OPERATOR_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "REINTERPRET_CAST_OPERATOR_TEST\n\n";

	return 0;
}
#endif 