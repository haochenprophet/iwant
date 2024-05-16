#include "remquo.h"
int Cremquo::my_init(void *p)
{
	this->name = "Cremquo";
	this->alias = "remquo";
	return 0;
}

Cremquo::Cremquo()
{
	this->my_init();
}

Cremquo::~Cremquo()
{

}

double Cremquo::remquo_c(double numer, double denom, int* quot)
{
	return remquo( numer,  denom,  quot);
}
float Cremquo::remquof_c(float numer, float denom, int* quot)
{
	return remquof(numer, denom, quot);
}
long double Cremquo::remquol_c(long double numer, long double denom, int* quot)
{
	return remquol(numer, denom, quot);
}

#ifndef REMQUO_TEST
#define REMQUO_TEST 0//1
#endif

#if REMQUO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "REMQUO_TEST\n\n";

	return 0;
}
#endif 