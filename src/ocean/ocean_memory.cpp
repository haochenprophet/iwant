#include "ocean_memory.h"
int Cocean_memory::my_init(void *p)
{
	this->name = "Cocean_memory";
	this->alias = "ocean_memory";
	return 0;
}

Cocean_memory::Cocean_memory()
{
	this->my_init();
}

Cocean_memory::~Cocean_memory()
{

}

#ifndef OCEAN_MEMORY_TEST
#define OCEAN_MEMORY_TEST 0//1
#endif

#if OCEAN_MEMORY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
