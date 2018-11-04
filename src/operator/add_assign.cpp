#include "add_assign.h"
int Cadd_assign::my_init(void *p)
{
	this->name = "Cadd_assign";
	this->alias = "add_assign";
	this->symbol = "+=";
	this->op_priority = 16;
	this->combination = Combination::R2L;
	return 0;
}

Cadd_assign::Cadd_assign()
{
	this->my_init();
}

Cadd_assign::~Cadd_assign()
{

}

#ifndef ADD_ASSIGN_TEST
#define ADD_ASSIGN_TEST 0//1
#endif

#if ADD_ASSIGN_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ADD_ASSIGN_TEST\n\n";

	return 0;
}
#endif 