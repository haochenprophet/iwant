#include "iswupper.h"
int Ciswupper::my_init(void *p)
{
	this->name = "Ciswupper";
	this->alias = "iswupper";
	return 0;
}

Ciswupper::Ciswupper()
{
	this->my_init();
}

Ciswupper::~Ciswupper()
{

}

#ifndef ISWUPPER_TEST
#define ISWUPPER_TEST 0//1
#endif

#if ISWUPPER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISWUPPER_TEST\n\n";

	return 0;
}
#endif 