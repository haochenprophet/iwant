#include "rint.h"
int Crint::my_init(void *p)
{
	this->name = "Crint";
	this->alias = "rint";
	return 0;
}

Crint::Crint()
{
	this->my_init();
}

Crint::~Crint()
{

}

double rint_c(double x)
{
	return rint(x);
}
float rintf_c(float x)
{
	return rintf(x);
}
long double rintl_c(long double x)
{
	return rintl(x);
}


#ifndef RINT_TEST
#define RINT_TEST 0//1
#endif

#if RINT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "RINT_TEST\n\n";

	return 0;
}
#endif 