#include "less_than.h"
int Cless_than::my_init(void *p)
{
	this->name = "Cless_than";
	this->alias = "less_than";
	this->symbol = "<";
	this->op_priority = 8;
	this->combination = Combination::L2R;
	return 0;
}

Cless_than::Cless_than()
{
	this->my_init();
}

Cless_than::~Cless_than()
{

}

#ifndef LESS_THAN_TEST
#define LESS_THAN_TEST 0//1
#endif

#if LESS_THAN_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LESS_THAN_TEST\n\n";

	return 0;
}
#endif 