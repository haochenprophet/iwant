#include "towupper.h"
int Ctowupper::my_init(void *p)
{
	this->name = "Ctowupper";
	this->alias = "towupper";
	return 0;
}

Ctowupper::Ctowupper()
{
	this->my_init();
}

Ctowupper::~Ctowupper()
{

}

#ifndef TOWUPPER_TEST
#define TOWUPPER_TEST 0//1
#endif

#if TOWUPPER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "TOWUPPER_TEST\n\n";

	return 0;
}
#endif 