#include "lgamma.h"
int Clgamma::my_init(void *p)
{
	this->name = "Clgamma";
	this->alias = "lgamma";
	return 0;
}

Clgamma::Clgamma()
{
	this->my_init();
}

Clgamma::~Clgamma()
{

}

#ifndef LGAMMA_TEST
#define LGAMMA_TEST 0//1
#endif

#if LGAMMA_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LGAMMA_TEST\n\n";

	return 0;
}
#endif 