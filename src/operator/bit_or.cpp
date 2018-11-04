#include "bit_or.h"
int Cbit_or::my_init(void *p)
{
	this->name = "Cbit_or";
	this->alias = "bit_or";
	this->symbol = "|";
	this->op_priority = 12;
	this->combination = Combination::L2R;
	return 0;
}

Cbit_or::Cbit_or()
{
	this->my_init();
}

Cbit_or::~Cbit_or()
{

}

#ifndef BIT_OR_TEST
#define BIT_OR_TEST 0//1
#endif

#if BIT_OR_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "BIT_OR_TEST\n\n";

	return 0;
}
#endif 