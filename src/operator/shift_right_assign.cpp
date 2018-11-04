#include "shift_right_assign.h"
int Cshift_right_assign::my_init(void *p)
{
	this->name = "Cshift_right_assign";
	this->alias = "shift_right_assign";
	this->symbol = ">>=";
	this->op_priority = 16;
	this->combination = Combination::R2L;
	return 0;
}

Cshift_right_assign::Cshift_right_assign()
{
	this->my_init();
}

Cshift_right_assign::~Cshift_right_assign()
{

}

#ifndef SHIFT_RIGHT_ASSIGN_TEST
#define SHIFT_RIGHT_ASSIGN_TEST 0//1
#endif

#if SHIFT_RIGHT_ASSIGN_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "SHIFT_RIGHT_ASSIGN_TEST\n\n";

	return 0;
}
#endif 