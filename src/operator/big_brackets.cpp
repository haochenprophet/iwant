#include "big_brackets.h"
int Cbig_brackets::my_init(void *p)
{
	this->name = "Cbig_brackets";
	this->alias = "big_brackets";
	return 0;
}

Cbig_brackets::Cbig_brackets()
{
	this->my_init();
}

Cbig_brackets::~Cbig_brackets()
{

}

#ifndef BIG_BRACKETS_TEST
#define BIG_BRACKETS_TEST 0//1
#endif

#if BIG_BRACKETS_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "BIG_BRACKETS_TEST\n\n";

	return 0;
}
#endif 