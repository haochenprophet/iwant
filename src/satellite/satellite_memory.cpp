#include "satellite_memory.h"
int Csatellite_memory::my_init(void *p)
{
	this->name = "Csatellite_memory";
	this->alias = "satellite_memory";
	return 0;
}

Csatellite_memory::Csatellite_memory()
{
	this->my_init();
}

Csatellite_memory::~Csatellite_memory()
{

}

#ifndef SATELLITE_MEMORY_TEST
#define SATELLITE_MEMORY_TEST 0//1
#endif

#if SATELLITE_MEMORY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
