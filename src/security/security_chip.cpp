#include "security_chip.h"
int Csecurity_chip::my_init(void *p)
{
	this->name = "Csecurity_chip";
	this->alias = "security_chip";
	return 0;
}

Csecurity_chip::Csecurity_chip()
{
	this->my_init();
}

Csecurity_chip::~Csecurity_chip()
{

}

#ifndef SECURITY_CHIP_TEST
#define SECURITY_CHIP_TEST 0//1
#endif

#if SECURITY_CHIP_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
