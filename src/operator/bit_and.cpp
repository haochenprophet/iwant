#include "bit_and.h"
int Cbit_and::my_init(void *p)
{
	this->name = "Cbit_and";
	this->alias = "bit_and";
	this->symbol = "&";
	this->op_priority = 10;
	this->combination = Combination::L2R;
	return 0;
}

Cbit_and::Cbit_and()
{
	this->my_init();
}

Cbit_and::~Cbit_and()
{

}

#ifndef BIT_AND_TEST
#define BIT_AND_TEST 0//1
#endif

#if BIT_AND_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "BIT_AND_TEST\n\n";

	return 0;
}
#endif 