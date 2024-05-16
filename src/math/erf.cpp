#include "erf.h"
int Cerf::my_init(void *p)
{
	this->name = "Cerf";
	this->alias = "erf";
	return 0;
}

Cerf::Cerf()
{
	this->my_init();
}

Cerf::~Cerf()
{

}
double Cerf::erf_c(double x)
{
	return erf(x);
}
float Cerf::erff_c(float x)
{
	return erff(x);
}
long double Cerf::erfl_c(long double x)
{
	return erfl(x);
}
#ifndef ERF_TEST
#define ERF_TEST 0//1
#endif

#if ERF_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ERF_TEST\n\n";

	return 0;
}
#endif 