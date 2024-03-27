#include "ocean_communication.h"
int Cocean_communication::my_init(void *p)
{
	this->name = "Cocean_communication";
	this->alias = "ocean_communication";
	return 0;
}

Cocean_communication::Cocean_communication()
{
	this->my_init();
}

Cocean_communication::~Cocean_communication()
{

}

#ifndef OCEAN_COMMUNICATION_TEST
#define OCEAN_COMMUNICATION_TEST 0//1
#endif

#if OCEAN_COMMUNICATION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
