#include "fmax.h"
int Cfmax::my_init(void *p)
{
	this->name = "Cfmax";
	this->alias = "fmax";
	return 0;
}

Cfmax::Cfmax()
{
	this->my_init();
}

Cfmax::~Cfmax()
{

}

#ifndef FMAX_TEST
#define FMAX_TEST 0//1
#endif

#if FMAX_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "FMAX_TEST\n\n";

	return 0;
}
#endif 