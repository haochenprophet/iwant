#include "mars_machine.h"
int Cmars_machine::my_init(void *p)
{
	this->name = "Cmars_machine";
	this->alias = "mars_machine";
	return 0;
}

Cmars_machine::Cmars_machine()
{
	this->my_init();
}

Cmars_machine::~Cmars_machine()
{

}

#ifndef MARS_MACHINE_TEST
#define MARS_MACHINE_TEST 0//1
#endif

#if MARS_MACHINE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
