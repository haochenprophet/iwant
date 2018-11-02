#include "divide_assign.h"
int Cdivide_assign::my_init(void *p)
{
	this->name = "Cdivide_assign";
	this->alias = "divide_assign";
	this->symbol = "/=";
	this->op_priority = 16;
	this->combination = Combination::R2L;
	return 0;
}

Cdivide_assign::Cdivide_assign()
{
	this->my_init();
}

Cdivide_assign::~Cdivide_assign()
{

}

#ifndef DIVIDE_ASSIGN_TEST
#define DIVIDE_ASSIGN_TEST 0//1
#endif

#if DIVIDE_ASSIGN_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "DIVIDE_ASSIGN_TEST\n\n";

	return 0;
}
#endif 