#include "llrint.h"
int Cllrint::my_init(void *p)
{
	this->name = "Cllrint";
	this->alias = "llrint";
	return 0;
}

Cllrint::Cllrint()
{
	this->my_init();
}

Cllrint::~Cllrint()
{

}
long long int Cllrint::llrint_c(double x)
{
	return llrint(x);
}

long long int Cllrint::llrintf_c(float x)
{
	return llrintf(x);
}

long long int Cllrint::llrintl_c(long double x)
{
	return llrintl(x);
}
#ifndef LLRINT_TEST
#define LLRINT_TEST 0//1
#endif

#if LLRINT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LLRINT_TEST\n\n";

	return 0;
}
#endif 