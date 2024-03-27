#include "ocean_type.h"
int Cocean_type::my_init(void *p)
{
	this->name = "Cocean_type";
	this->alias = "ocean_type";
	return 0;
}

Cocean_type::Cocean_type()
{
	this->my_init();
}

Cocean_type::~Cocean_type()
{

}

#ifndef OCEAN_TYPE_TEST
#define OCEAN_TYPE_TEST 0//1
#endif

#if OCEAN_TYPE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
