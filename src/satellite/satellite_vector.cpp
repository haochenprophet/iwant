#include "satellite_vector.h"
int Csatellite_vector::my_init(void *p)
{
	this->name = "Csatellite_vector";
	this->alias = "satellite_vector";
	return 0;
}

Csatellite_vector::Csatellite_vector()
{
	this->my_init();
}

Csatellite_vector::~Csatellite_vector()
{

}

#ifndef SATELLITE_VECTOR_TEST
#define SATELLITE_VECTOR_TEST 0//1
#endif

#if SATELLITE_VECTOR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
