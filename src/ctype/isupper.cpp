#include "isupper.h"
int Cisupper::my_init(void *p)
{
	this->name = "Cisupper";
	this->alias = "isupper";
	return 0;
}

Cisupper::Cisupper()
{
	this->my_init();
}

Cisupper::~Cisupper()
{

}

#ifndef ISUPPER_TEST
#define ISUPPER_TEST 0//1
#endif

#if ISUPPER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ISUPPER_TEST\n\n";

	return 0;
}
#endif 