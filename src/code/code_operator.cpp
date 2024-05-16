#include "code_operator.h"
int Ccode_operator::my_init(void *p)
{
	this->name = "Ccode_operator";
	this->alias = "code_operator";
	return 0;
}

Ccode_operator::Ccode_operator()
{
	this->my_init();
}

Ccode_operator::~Ccode_operator()
{

}

#ifndef CODE_OPERATOR_TEST
#define CODE_OPERATOR_TEST 0//1
#endif

#if CODE_OPERATOR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
