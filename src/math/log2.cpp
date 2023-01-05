#include "log2.h"
int Clog2::my_init(void *p)
{
	this->name = "Clog2";
	this->alias = "log2";
	return 0;
}

Clog2::Clog2()
{
	this->my_init();
}

Clog2::~Clog2()
{

}

double log2_c(double x)
{
	return log2(x);
}
float log2f_c(float x)
{
	return log2f(x);
}
long double log2l_c(long double x)
{
	return log2l(x);
}

#ifndef LOG2_TEST
#define LOG2_TEST 0//1
#endif

#if LOG2_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LOG2_TEST\n\n";

	return 0;
}
#endif 