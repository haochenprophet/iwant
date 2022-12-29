#include "calloc.h"
int Ccalloc::my_init(void *p)
{
	this->name = "Ccalloc";
	this->alias = "calloc";
	return 0;
}

Ccalloc::Ccalloc()
{
	this->my_init();
}

Ccalloc::~Ccalloc()
{

}

void* Ccalloc::calloc_c(size_t num, size_t size)
{
	return calloc( num,  size);
}

#ifndef CALLOC_TEST
#define CALLOC_TEST 0//1
#endif

#if CALLOC_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "CALLOC_TEST\n\n";

	return 0;
}
#endif 