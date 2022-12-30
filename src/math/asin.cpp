#include "asin.h"
int Casin::my_init(void *p)
{
	this->name = "Casin";
	this->alias = "asin";
	return 0;
}

Casin::Casin()
{
	this->my_init();
}

Casin::~Casin()
{

}

double Casin::asin_c(double x)
{
	return asin(x);
}

#ifndef ASIN_TEST
#define ASIN_TEST 0//1
#endif

#if ASIN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ASIN_TEST\n\n";

	return 0;
}
#endif 