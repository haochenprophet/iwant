#include "increment_suffix.h"
int Cincrement_suffix::my_init(void *p)
{
	this->name = "Cincrement_suffix";
	this->alias = "increment_suffix";
	this->symbol = "++";
	this->op_priority = 2;
	this->combination = Combination::L2R;
	return 0;
}

Cincrement_suffix::Cincrement_suffix()
{
	this->my_init();
}

Cincrement_suffix::~Cincrement_suffix()
{

}

#ifndef INCREMENT_SUFFIX_TEST
#define INCREMENT_SUFFIX_TEST 0//1
#endif

#if INCREMENT_SUFFIX_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "INCREMENT_SUFFIX_TEST\n\n";

	return 0;
}
#endif 