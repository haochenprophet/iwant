#include "ilogb.h"
int Cilogb::my_init(void *p)
{
	this->name = "Cilogb";
	this->alias = "ilogb";
	return 0;
}

Cilogb::Cilogb()
{
	this->my_init();
}

Cilogb::~Cilogb()
{

}

int Cilogb::ilogb_c(double x)
{
	return ilogb(x);
}

int Cilogb::ilogbf_c(float x)
{
	return ilogbf(x);
}

int Cilogb::ilogbl_c(long double x)
{
	return ilogbl(x);
}

#ifndef ILOGB_TEST
#define ILOGB_TEST 0//1
#endif

#if ILOGB_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ILOGB_TEST\n\n";

	return 0;
}
#endif 