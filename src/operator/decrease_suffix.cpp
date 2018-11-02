#include "decrease_suffix.h"
int Cdecrease_suffix::my_init(void *p)
{
	this->name = "Cdecrease_suffix";
	this->alias = "decrease_suffix";
	this->symbol = "--";
	this->op_priority = 2;
	this->combination = Combination::L2R;
	return 0;
}

Cdecrease_suffix::Cdecrease_suffix()
{
	this->my_init();
}

Cdecrease_suffix::~Cdecrease_suffix()
{

}

#ifndef DECREASE_SUFFIX_TEST
#define DECREASE_SUFFIX_TEST 0//1
#endif

#if DECREASE_SUFFIX_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "DECREASE_SUFFIX_TEST\n\n";

	return 0;
}
#endif 