#include "toupper.h"
int Ctoupper::my_init(void *p)
{
	this->name = "Ctoupper";
	this->alias = "toupper";
	return 0;
}

Ctoupper::Ctoupper()
{
	this->my_init();
}

Ctoupper::~Ctoupper()
{

}

#ifndef TOUPPER_TEST
#define TOUPPER_TEST 0//1
#endif

#if TOUPPER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "TOUPPER_TEST\n\n";

	return 0;
}
#endif 