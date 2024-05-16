#include "pow.h"
int Cpow::my_init(void *p)
{
	this->name = "Cpow";
	this->alias = "pow";
	return 0;
}

Cpow::Cpow()
{
	this->my_init();
}

Cpow::~Cpow()
{

}

double Cpow::pow_c(double base, double exponent)
{
	return pow( base,  exponent);
}

#ifndef POW_TEST
#define POW_TEST 0//1
#endif

#if POW_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "POW_TEST\n\n";

	return 0;
}
#endif 