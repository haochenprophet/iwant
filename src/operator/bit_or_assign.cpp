#include "bit_or_assign.h"
int Cbit_or_assign::my_init(void *p)
{
	this->name = "Cbit_or_assign";
	this->alias = "bit_or_assign";
	this->symbol = "|=";
	this->op_priority = 16;
	this->combination = Combination::R2L;
	return 0;
}

Cbit_or_assign::Cbit_or_assign()
{
	this->my_init();
}

Cbit_or_assign::~Cbit_or_assign()
{

}

#ifndef BIT_OR_ASSIGN_TEST
#define BIT_OR_ASSIGN_TEST 0//1
#endif

#if BIT_OR_ASSIGN_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "BIT_OR_ASSIGN_TEST\n\n";

	return 0;
}
#endif 