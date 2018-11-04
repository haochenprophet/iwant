#include "bit_xor_assign.h"
int Cbit_xor_assign::my_init(void *p)
{
	this->name = "Cbit_xor_assign";
	this->alias = "bit_xor_assign";
	this->symbol = "^=";
	this->op_priority = 16;
	this->combination = Combination::R2L;
	return 0;
}

Cbit_xor_assign::Cbit_xor_assign()
{
	this->my_init();
}

Cbit_xor_assign::~Cbit_xor_assign()
{

}

#ifndef BIT_XOR_ASSIGN_TEST
#define BIT_XOR_ASSIGN_TEST 0//1
#endif

#if BIT_XOR_ASSIGN_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "BIT_XOR_ASSIGN_TEST\n\n";

	return 0;
}
#endif 