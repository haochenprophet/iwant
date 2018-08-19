#include "llabs.h"
int Cllabs::my_init(void *p)
{
	this->name = "Cllabs";
	this->alias = "llabs";
	return 0;
}

Cllabs::Cllabs()
{
	this->my_init();
}

Cllabs::~Cllabs()
{

}

#ifndef LLABS_TEST
#define LLABS_TEST 0//1
#endif

#if LLABS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LLABS_TEST\n\n";

	return 0;
}
#endif 