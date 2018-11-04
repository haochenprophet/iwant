#include "logic_or.h"
int Clogic_or::my_init(void *p)
{
	this->name = "Clogic_or";
	this->alias = "logic_or";
	this->symbol = "||";
	this->op_priority = 14;
	this->combination = Combination::L2R;
	return 0;
}

Clogic_or::Clogic_or()
{
	this->my_init();
}

Clogic_or::~Clogic_or()
{

}

#ifndef LOGIC_OR_TEST
#define LOGIC_OR_TEST 0//1
#endif

#if LOGIC_OR_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LOGIC_OR_TEST\n\n";

	return 0;
}
#endif 