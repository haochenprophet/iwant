#include "memory.h"
int Cmemory::my_init(void *p)
{
	this->name = "Cmemory";
	this->alias = "memory";
	return 0;
}

Cmemory::Cmemory()
{
	this->my_init();
}

Cmemory::~Cmemory()
{

}

#ifndef MEMORY_TEST
#define MEMORY_TEST 0//1
#endif

#if MEMORY_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MEMORY_TEST\n\n";

	return 0;
}
#endif 