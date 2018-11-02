#include "bitwise_not.h"
int Cbitwise_not::my_init(void *p)
{
	this->name = "Cbitwise_not";
	this->alias = "bitwise_not";
	this->symbol = "~";
	this->op_priority = 3;
	this->combination = Combination::R2L;
	return 0;
}

Cbitwise_not::Cbitwise_not()
{
	this->my_init();
}

Cbitwise_not::~Cbitwise_not()
{

}

#ifndef BITWISE_NOT_TEST
#define BITWISE_NOT_TEST 0//1
#endif

#if BITWISE_NOT_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "BITWISE_NOT_TEST\n\n";

	return 0;
}
#endif 