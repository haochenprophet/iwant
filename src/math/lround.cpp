#include "lround.h"
int Clround::my_init(void *p)
{
	this->name = "Clround";
	this->alias = "lround";
	return 0;
}

Clround::Clround()
{
	this->my_init();
}

Clround::~Clround()
{

}

long int Clround::lround_c(double x)
{
	return lround(x);
}

long int Clround::lroundf_c(float x)
{
	return lroundf(x);
}

long int Clround::lroundl_c(long double x)
{
	return lroundl(x);
}

#ifndef LROUND_TEST
#define LROUND_TEST 0//1
#endif

#if LROUND_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LROUND_TEST\n\n";

	return 0;
}
#endif 