#include "shift_left.h"
int Cshift_left::my_init(void *p)
{
	this->name = "Cshift_left";
	this->alias = "shift_left";
	this->symbol = "<<";
	this->op_priority = 7;
	this->combination = Combination::L2R;
	return 0;
}

Cshift_left::Cshift_left()
{
	this->my_init();
}

Cshift_left::~Cshift_left()
{

}

#ifndef SHIFT_LEFT_TEST
#define SHIFT_LEFT_TEST 0//1
#endif

#if SHIFT_LEFT_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "SHIFT_LEFT_TEST\n\n";

	return 0;
}
#endif 