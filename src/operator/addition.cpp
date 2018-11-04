#include "addition.h"
int Caddition::my_init(void *p)
{
	this->name = "Caddition";
	this->alias = "addition";
	this->symbol = "+";
	this->op_priority = 6;
	this->combination = Combination::L2R;
	return 0;
}

Caddition::Caddition()
{
	this->my_init();
}

Caddition::~Caddition()
{

}

#ifndef ADDITION_TEST
#define ADDITION_TEST 0//1
#endif

#if ADDITION_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ADDITION_TEST\n\n";

	return 0;
}
#endif 