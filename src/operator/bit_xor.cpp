#include "bit_xor.h"
int Cbit_xor::my_init(void *p)
{
	this->name = "Cbit_xor";
	this->alias = "bit_xor";
	this->symbol = "^";
	this->op_priority = 9;
	this->combination = Combination::L2R;
	return 0;
}

Cbit_xor::Cbit_xor()
{
	this->my_init();
}

Cbit_xor::~Cbit_xor()
{

}

#ifndef BIT_XOR_TEST
#define BIT_XOR_TEST 0//1
#endif

#if BIT_XOR_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "BIT_XOR_TEST\n\n";

	return 0;
}
#endif 