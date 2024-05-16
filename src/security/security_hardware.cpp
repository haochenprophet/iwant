#include "security_hardware.h"
int Csecurity_hardware::my_init(void *p)
{
	this->name = "Csecurity_hardware";
	this->alias = "security_hardware";
	return 0;
}

Csecurity_hardware::Csecurity_hardware()
{
	this->my_init();
}

Csecurity_hardware::~Csecurity_hardware()
{

}

#ifndef SECURITY_HARDWARE_TEST
#define SECURITY_HARDWARE_TEST 0//1
#endif

#if SECURITY_HARDWARE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
