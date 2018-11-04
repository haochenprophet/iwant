#include "not_equal.h"
int Cnot_equal::my_init(void *p)
{
	this->name = "Cnot_equal";
	this->alias = "not_equal";
	this->symbol = "!=";
	this->op_priority = 9;
	this->combination = Combination::L2R;
	return 0;
}

Cnot_equal::Cnot_equal()
{
	this->my_init();
}

Cnot_equal::~Cnot_equal()
{

}

#ifndef NOT_EQUAL_TEST
#define NOT_EQUAL_TEST 0//1
#endif

#if NOT_EQUAL_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "NOT_EQUAL_TEST\n\n";

	return 0;
}
#endif 