#include "mold_remainder.h"
int Cmold_remainder::my_init(void *p)
{
	this->name = "Cmold_remainder";
	this->alias = "mold_remainder";
	this->symbol = "%";
	this->op_priority = 5;
	this->combination = Combination::L2R;
	return 0;
}

Cmold_remainder::Cmold_remainder()
{
	this->my_init();
}

Cmold_remainder::~Cmold_remainder()
{

}

#ifndef MOLD_REMAINDER_TEST
#define MOLD_REMAINDER_TEST 0//1
#endif

#if MOLD_REMAINDER_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MOLD_REMAINDER_TEST\n\n";

	return 0;
}
#endif 