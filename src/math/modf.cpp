#include "modf.h"
int Cmodf::my_init(void *p)
{
	this->name = "Cmodf";
	this->alias = "modf";
	return 0;
}

Cmodf::Cmodf()
{
	this->my_init();
}

Cmodf::~Cmodf()
{

}

double Cmodf:: modf_c(double x, double* intpart)
{
	return modf( x,  intpart);
}

#ifndef MODF_TEST
#define MODF_TEST 0//1
#endif

#if MODF_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MODF_TEST\n\n";

	return 0;
}
#endif 