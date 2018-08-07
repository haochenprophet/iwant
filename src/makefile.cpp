#include "makefile.h"
int Cmakefile::my_init(void *p)
{
	this->name = "Cmakefile";
	this->alias = "makefile";
	return 0;
}

Cmakefile::Cmakefile()
{
	this->my_init();
}

#ifndef MAKEFILE_TEST
#define MAKEFILE_TEST 0//1
#endif

#if MAKEFILE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MAKEFILE_TEST\n\n";

	return 0;
}
#endif 