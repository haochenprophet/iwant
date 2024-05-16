#include "lrint.h"
int Clrint::my_init(void *p)
{
	this->name = "Clrint";
	this->alias = "lrint";
	return 0;
}

Clrint::Clrint()
{
	this->my_init();
}

Clrint::~Clrint()
{

}

long int lrint_c(double x)
{
	return lrint(x);
}
long int lrintf_c(float x)
{
	return lrintf(x);
}
long int lrintl_c(long double x)
{
	return lrintl(x);
}

#ifndef LRINT_TEST
#define LRINT_TEST 0//1
#endif

#if LRINT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LRINT_TEST\n\n";

	return 0;
}
#endif 