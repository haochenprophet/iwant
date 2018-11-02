#include "at_operator.h"
int Cat_operator::my_init(void *p)
{
	this->name = "Cat_operator";
	this->alias = "at_operator";
	this->symbol = "@";
	return 0;
}

Cat_operator::Cat_operator()
{
	this->my_init();
}

Cat_operator::~Cat_operator()
{

}

#ifndef AT_OPERATOR_TEST
#define AT_OPERATOR_TEST 0//1
#endif

#if AT_OPERATOR_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "AT_OPERATOR_TEST\n\n";

	return 0;
}
#endif 