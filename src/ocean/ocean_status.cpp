#include "ocean_status.h"
int Cocean_status::my_init(void *p)
{
	this->name = "Cocean_status";
	this->alias = "ocean_status";
	return 0;
}

Cocean_status::Cocean_status()
{
	this->my_init();
}

Cocean_status::~Cocean_status()
{

}

#ifndef OCEAN_STATUS_TEST
#define OCEAN_STATUS_TEST 0//1
#endif

#if OCEAN_STATUS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
