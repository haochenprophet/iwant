#include "ceil.h"
int Cceil::my_init(void *p)
{
	this->name = "Cceil";
	this->alias = "ceil";
	return 0;
}

Cceil::Cceil()
{
	this->my_init();
}

Cceil::~Cceil()
{

}
double Cceil::ceil_c(double x)
{
	return ceil(x);
}
#ifndef CEIL_TEST
#define CEIL_TEST 0//1
#endif

#if CEIL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "CEIL_TEST\n\n";

	return 0;
}
#endif 