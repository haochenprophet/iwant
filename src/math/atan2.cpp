#include "atan2.h"
int Catan2::my_init(void *p)
{
	this->name = "Catan2";
	this->alias = "atan2";
	return 0;
}

Catan2::Catan2()
{
	this->my_init();
}

Catan2::~Catan2()
{

}

double Catan2::atan2_c(double y, double x)
{
	return atan2( y,  x);
}

#ifndef ATAN2_TEST
#define ATAN2_TEST 0//1
#endif

#if ATAN2_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ATAN2_TEST\n\n";

	return 0;
}
#endif 