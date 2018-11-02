#include "function_call.h"
int Cfunction_call::my_init(void *p)
{
	this->name = "Cfunction_call";
	this->alias = "function_call";
	this->symbol = "()";
	this->combination = Combination::L2R;
	this->op_priority = 2;
	return 0;
}

Cfunction_call::Cfunction_call()
{
	this->my_init();
}

Cfunction_call::~Cfunction_call()
{

}

#ifndef FUNCTION_CALL_TEST
#define FUNCTION_CALL_TEST 0//1
#endif

#if FUNCTION_CALL_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "FUNCTION_CALL_TEST\n\n";

	return 0;
}
#endif 