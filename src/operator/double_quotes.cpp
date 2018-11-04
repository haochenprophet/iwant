#include "double_quotes.h"
int Cdouble_quotes::my_init(void *p)
{
	this->name = "Cdouble_quotes";
	this->alias = "double_quotes";
	this->symbol = "\"...\"";

	return 0;
}

Cdouble_quotes::Cdouble_quotes()
{
	this->my_init();
}

Cdouble_quotes::~Cdouble_quotes()
{

}

#ifndef DOUBLE_QUOTES_TEST
#define DOUBLE_QUOTES_TEST 0//1
#endif

#if DOUBLE_QUOTES_TEST
#include "operator_all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "DOUBLE_QUOTES_TEST\n\n";

	return 0;
}
#endif 