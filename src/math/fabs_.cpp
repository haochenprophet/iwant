#include "fabs_.h"
int Cfabs::my_init(void *p)
{
	this->name = "Cfabs";
	this->alias = "fabs";
	return 0;
}

Cfabs::Cfabs()
{
	this->my_init();
}

Cfabs::~Cfabs()
{

}

#ifndef FABS_TEST
#define FABS_TEST 0//1
#endif

#if FABS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "FABS_TEST\n\n";

	return 0;
}
#endif 