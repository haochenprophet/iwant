#include "logic_not.h"
int Clogic_not::my_init(void *p)
{
	this->name = "Clogic_not";
	this->alias = "logic_not";
	this->symbol = "!";
	this->op_priority = 3;
	this->combination = Combination::R2L;
	return 0;
}

Clogic_not::Clogic_not()
{
	this->my_init();
}

Clogic_not::~Clogic_not()
{

}

#ifndef LOGIC_NOT_TEST
#define LOGIC_NOT_TEST 0//1
#endif

#if LOGIC_NOT_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LOGIC_NOT_TEST\n\n";

	return 0;
}
#endif 