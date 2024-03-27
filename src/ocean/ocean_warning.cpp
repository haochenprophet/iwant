#include "ocean_warning.h"
int Cocean_warning::my_init(void *p)
{
	this->name = "Cocean_warning";
	this->alias = "ocean_warning";
	return 0;
}

Cocean_warning::Cocean_warning()
{
	this->my_init();
}

Cocean_warning::~Cocean_warning()
{

}

#ifndef OCEAN_WARNING_TEST
#define OCEAN_WARNING_TEST 0//1
#endif

#if OCEAN_WARNING_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
