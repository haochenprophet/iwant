#include "exp2.h"
int Cexp2::my_init(void *p)
{
	this->name = "Cexp2";
	this->alias = "exp2";
	return 0;
}

Cexp2::Cexp2()
{
	this->my_init();
}

Cexp2::~Cexp2()
{

}
double Cexp2::exp2_c(double x)
{
	return exp2(x);
}
float Cexp2::exp2f_c(float x)
{
	return exp2f(x);
}
long double Cexp2::exp2l_c(long double x)
{
	return exp2l(x);
}

#ifndef EXP2_TEST
#define EXP2_TEST 0//1
#endif

#if EXP2_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "EXP2_TEST\n\n";

	return 0;
}
#endif 