#include "division.h"
int Cdivision::my_init(void *p)
{
	this->name = "Cdivision";
	this->alias = "division";
	this->symbol = "/";
	this->op_priority = 5;
	this->combination = Combination::L2R;
	return 0;
}

Cdivision::Cdivision()
{
	this->my_init();
}

Cdivision::~Cdivision()
{

}

#ifndef DIVISION_TEST
#define DIVISION_TEST 0//1
#endif

#if DIVISION_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "DIVISION_TEST\n\n";

	return 0;
}
#endif 