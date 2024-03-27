#include "ocean_vector.h"
int Cocean_vector::my_init(void *p)
{
	this->name = "Cocean_vector";
	this->alias = "ocean_vector";
	return 0;
}

Cocean_vector::Cocean_vector()
{
	this->my_init();
}

Cocean_vector::~Cocean_vector()
{

}

#ifndef OCEAN_VECTOR_TEST
#define OCEAN_VECTOR_TEST 0//1
#endif

#if OCEAN_VECTOR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
