#include "malloc.h"
int Cmalloc::my_init(void *p)
{
	this->name = "Cmalloc";
	this->alias = "malloc";
	return 0;
}

Cmalloc::Cmalloc()
{
	this->my_init();
}

Cmalloc::~Cmalloc()
{

}
void* Cmalloc::malloc_c(size_t size)
{
	return malloc(size);
}
#ifndef MALLOC_TEST
#define MALLOC_TEST 0//1
#endif

#if MALLOC_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MALLOC_TEST\n\n";

	return 0;
}
#endif 