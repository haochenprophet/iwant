#include "cosh.h"
int Ccosh::my_init(void *p)
{
	this->name = "Ccosh";
	this->alias = "cosh";
	return 0;
}

Ccosh::Ccosh()
{
	this->my_init();
}

Ccosh::~Ccosh()
{

}
double Ccosh::cosh_h(double x)
{
	return cosh(x);
}
#ifndef COSH_TEST
#define COSH_TEST 0//1
#endif

#if COSH_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "COSH_TEST\n\n";

	return 0;
}
#endif 