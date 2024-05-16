#include "ldexp.h"
int Cldexp::my_init(void *p)
{
	this->name = "Cldexp";
	this->alias = "ldexp";
	return 0;
}

Cldexp::Cldexp()
{
	this->my_init();
}

Cldexp::~Cldexp()
{

}

double Cldexp::ldexp_c(double x, int exp)
{
	return ldexp( x,  exp);
}
#ifndef LDEXP_TEST
#define LDEXP_TEST 0//1
#endif

#if LDEXP_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LDEXP_TEST\n\n";

	return 0;
}
#endif 