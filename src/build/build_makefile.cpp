#include "build_makefile.h"
int Cbuild_makefile::my_init(void *p)
{
	this->name = "Cbuild_makefile";
	this->alias = "build_makefile";
	return 0;
}

Cbuild_makefile::Cbuild_makefile()
{
	this->my_init();
}

Cbuild_makefile::~Cbuild_makefile()
{

}

#ifndef BUILD_MAKEFILE_TEST
#define BUILD_MAKEFILE_TEST 0//1
#endif

#if BUILD_MAKEFILE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
