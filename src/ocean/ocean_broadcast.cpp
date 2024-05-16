#include "ocean_broadcast.h"
int Cocean_broadcast::my_init(void *p)
{
	this->name = "Cocean_broadcast";
	this->alias = "ocean_broadcast";
	return 0;
}

Cocean_broadcast::Cocean_broadcast()
{
	this->my_init();
}

Cocean_broadcast::~Cocean_broadcast()
{

}

#ifndef OCEAN_BROADCAST_TEST
#define OCEAN_BROADCAST_TEST 0//1
#endif

#if OCEAN_BROADCAST_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
