#include "realloc.h"
int Crealloc::my_init(void *p)
{
	this->name = "Crealloc";
	this->alias = "realloc";
	return 0;
}

Crealloc::Crealloc()
{
	this->my_init();
}

Crealloc::~Crealloc()
{

}

#ifndef REALLOC_TEST
#define REALLOC_TEST 0//1
#endif

#if REALLOC_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "REALLOC_TEST\n\n";

	return 0;
}
#endif 