#include "multiplication.h"
int Cmultiplication::my_init(void *p)
{
	this->name = "Cmultiplication";
	this->alias = "multiplication";
	this->symbol = "*";
	this->op_priority = 5;
	this->combination = Combination::L2R;
	return 0;
}

Cmultiplication::Cmultiplication()
{
	this->my_init();
}

Cmultiplication::~Cmultiplication()
{

}

#ifndef MULTIPLICATION_TEST
#define MULTIPLICATION_TEST 0//1
#endif

#if MULTIPLICATION_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MULTIPLICATION_TEST\n\n";

	return 0;
}
#endif 