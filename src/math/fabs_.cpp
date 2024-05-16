#include "fabs_.h"
int Cfabs::my_init(void *p)
{
	this->name = "Cfabs";
	this->alias = "fabs";
	return 0;
}

Cfabs::Cfabs()
{
	this->my_init();
}

Cfabs::~Cfabs()
{

}

double Cfabs::fabs_c(double x)
{
	return fabs(x);
}
#ifndef FABS__TEST
#define FABS__TEST 0//1
#endif

#if FABS__TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "FABS_TEST\n\n";

	return 0;
}
#endif 