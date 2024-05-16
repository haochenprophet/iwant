#include "ldiv.h"
int Cldiv::my_init(void *p)
{
	this->name = "Cldiv";
	this->alias = "ldiv";
	return 0;
}

Cldiv::Cldiv()
{
	this->my_init();
}

Cldiv::~Cldiv()
{

}
ldiv_t Cldiv::ldiv_c(long int numer, long int denom)
{
	return ldiv(numer, denom);
}

#ifndef LDIV_TEST
#define LDIV_TEST 0//1
#endif

#if LDIV_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LDIV_TEST\n\n";

	return 0;
}
#endif 