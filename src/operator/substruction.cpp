#include "substruction.h"
int Csubstruction::my_init(void *p)
{
	this->name = "Csubstruction";
	this->alias = "substruction";
	this->symbol = "-";
	this->op_priority = 6;
	this->combination = Combination::L2R;
	return 0;
}

Csubstruction::Csubstruction()
{
	this->my_init();
}

Csubstruction::~Csubstruction()
{

}

#ifndef SUBSTRUCTION_TEST
#define SUBSTRUCTION_TEST 0//1
#endif

#if SUBSTRUCTION_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "SUBSTRUCTION_TEST\n\n";

	return 0;
}
#endif 