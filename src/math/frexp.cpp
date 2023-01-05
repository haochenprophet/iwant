#include "frexp.h"
int Cfrexp::my_init(void *p)
{
	this->name = "Cfrexp";
	this->alias = "frexp";
	return 0;
}

Cfrexp::Cfrexp()
{
	this->my_init();
}

Cfrexp::~Cfrexp()
{

}

double Cfrexp::frexp_c(double x, int* exp)
{
	return frexp( x,  exp);
}

#ifndef FREXP_TEST
#define FREXP_TEST 0//1
#endif

#if FREXP_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "FREXP_TEST\n\n";

	return 0;
}
#endif 