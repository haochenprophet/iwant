#include "abs.h"
int Cabs::my_init(void *p)
{
	this->name = "Cabs";
	this->alias = "abs";
	return 0;
}

Cabs::Cabs()
{
	this->my_init();
}

Cabs::~Cabs()
{

}

#ifndef ABS_TEST
#define ABS_TEST 0//1
#endif

#if ABS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ABS_TEST\n\n";

	return 0;
}
#endif 