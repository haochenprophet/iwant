#include "logic_and.h"
int Clogic_and::my_init(void *p)
{
	this->name = "Clogic_and";
	this->alias = "logic_and";
	this->symbol = "&&";
	this->op_priority = 13;
	this->combination = Combination::L2R;
	return 0;
}

Clogic_and::Clogic_and()
{
	this->my_init();
}

Clogic_and::~Clogic_and()
{

}

#ifndef LOGIC_AND_TEST
#define LOGIC_AND_TEST 0//1
#endif

#if LOGIC_AND_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LOGIC_AND_TEST\n\n";

	return 0;
}
#endif 