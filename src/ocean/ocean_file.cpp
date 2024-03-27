#include "ocean_file.h"
int Cocean_file::my_init(void *p)
{
	this->name = "Cocean_file";
	this->alias = "ocean_file";
	return 0;
}

Cocean_file::Cocean_file()
{
	this->my_init();
}

Cocean_file::~Cocean_file()
{

}

#ifndef OCEAN_FILE_TEST
#define OCEAN_FILE_TEST 0//1
#endif

#if OCEAN_FILE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
