#include "atanh.h"
int Catanh::my_init(void *p)
{
	this->name = "Catanh";
	this->alias = "atanh";
	return 0;
}

Catanh::Catanh()
{
	this->my_init();
}

Catanh::~Catanh()
{

}
double Catanh::atanh_c(double x)
{
	return atanh(x);
}
float Catanh::atanhf_c(float x)
{
	return atanhf(x);
}
long double Catanh::atanhl_c(long double x)
{
	return atanhl(x);
}
#ifndef ATANH_TEST
#define ATANH_TEST 0//1
#endif

#if ATANH_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ATANH_TEST\n\n";

	return 0;
}
#endif 