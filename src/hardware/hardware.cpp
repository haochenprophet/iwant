#include "hardware.h"
int Chardware::my_init(void *p)
{
	this->name = "Chardware";
	this->alias = "hardware";
	return 0;
}

Chardware::Chardware()
{
	this->my_init();
}

Chardware::~Chardware()
{

}

#ifndef HARDWARE_TEST
#define HARDWARE_TEST 0//1
#endif

#if HARDWARE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "HARDWARE_TEST\n\n";

	return 0;
}
#endif 