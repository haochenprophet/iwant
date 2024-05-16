#include "code_expression.h"
int Ccode_expression::my_init(void *p)
{
	this->name = "Ccode_expression";
	this->alias = "code_expression";
	return 0;
}

Ccode_expression::Ccode_expression()
{
	this->my_init();
}

Ccode_expression::~Ccode_expression()
{

}

#ifndef CODE_EXPRESSION_TEST
#define CODE_EXPRESSION_TEST 0//1
#endif

#if CODE_EXPRESSION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
