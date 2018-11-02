#include "multiply_assign.h"
int Cmultiply_assign::my_init(void *p)
{
	this->name = "Cmultiply_assign";
	this->alias = "multiply_assign";
	this->symbol = "*=";
	this->op_priority = 16;
	this->combination = Combination::R2L;
	return 0;
}

Cmultiply_assign::Cmultiply_assign()
{
	this->my_init();
}

Cmultiply_assign::~Cmultiply_assign()
{

}

#ifndef MULTIPLY_ASSIGN_TEST
#define MULTIPLY_ASSIGN_TEST 0//1
#endif

#if MULTIPLY_ASSIGN_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MULTIPLY_ASSIGN_TEST\n\n";

	return 0;
}
#endif 