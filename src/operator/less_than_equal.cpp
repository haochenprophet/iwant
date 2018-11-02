#include "less_than_equal.h"
int Cless_than_equal::my_init(void *p)
{
	this->name = "Cless_than_equal";
	this->alias = "less_than_equal";
	this->symbol = "<=";
	this->op_priority = 8;
	this->combination = Combination::L2R;
	return 0;
}

Cless_than_equal::Cless_than_equal()
{
	this->my_init();
}

Cless_than_equal::~Cless_than_equal()
{

}

#ifndef LESS_THAN_EQUAL_TEST
#define LESS_THAN_EQUAL_TEST 0//1
#endif

#if LESS_THAN_EQUAL_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LESS_THAN_EQUAL_TEST\n\n";

	return 0;
}
#endif 