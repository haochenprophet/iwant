#include "acos.h"
int Cacos::my_init(void *p)
{
	this->name = "Cacos";
	this->alias = "acos";
	return 0;
}

Cacos::Cacos()
{
	this->my_init();
}

Cacos::~Cacos()
{

}

double Cacos::acos_c(double x)
{
	return acos( x);
}

#ifndef ACOS_TEST
#define ACOS_TEST 0//1
#endif

#if ACOS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ACOS_TEST\n\n";

	return 0;
}
#endif 