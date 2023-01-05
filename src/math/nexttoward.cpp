#include "nexttoward.h"
int Cnexttoward::my_init(void *p)
{
	this->name = "Cnexttoward";
	this->alias = "nexttoward";
	return 0;
}

Cnexttoward::Cnexttoward()
{
	this->my_init();
}

Cnexttoward::~Cnexttoward()
{

}

double nexttoward_c(double x, long double y)
{
	return  nexttoward( x, y);
}

float nexttowardf_c(float x, long double y)
{
	return  nexttowardf(x, y);
}

long double nexttowardl_c(long double x, long double y)
{
	return  nexttowardl(x, y);
}
#ifndef NEXTTOWARD_TEST
#define NEXTTOWARD_TEST 0//1
#endif

#if NEXTTOWARD_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "NEXTTOWARD_TEST\n\n";

	return 0;
}
#endif 