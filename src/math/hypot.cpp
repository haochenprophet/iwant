#include "hypot.h"
int Chypot::my_init(void *p)
{
	this->name = "Chypot";
	this->alias = "hypot";
	return 0;
}

Chypot::Chypot()
{
	this->my_init();
}

Chypot::~Chypot()
{

}

double Chypot::hypot_c(double x, double y)
{
	return hypot( x,  y);
}

float Chypot::hypotf_c(float x, float y)
{
	return hypotf(x, y);
}

long double Chypot::hypotl_c(long double x, long double y)
{
	return hypotl(x, y);
}

#ifndef HYPOT_TEST
#define HYPOT_TEST 0//1
#endif

#if HYPOT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "HYPOT_TEST\n\n";

	return 0;
}
#endif 