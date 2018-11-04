#include "static_cast_operator.h"
int Cstatic_cast_operator::my_init(void *p)
{
	this->name = "Cstatic_cast_operator";
	this->alias = "static_cast_operator";
	return 0;
}

Cstatic_cast_operator::Cstatic_cast_operator()
{
	this->my_init();
}

Cstatic_cast_operator::~Cstatic_cast_operator()
{

}

#ifndef STATIC_CAST_OPERATOR_TEST
#define STATIC_CAST_OPERATOR_TEST 0//1
#endif

#if STATIC_CAST_OPERATOR_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STATIC_CAST_OPERATOR_TEST\n\n";

	return 0;
}
#endif 