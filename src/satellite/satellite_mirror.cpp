#include "satellite_mirror.h"
int Csatellite_mirror::my_init(void *p)
{
	this->name = "Csatellite_mirror";
	this->alias = "satellite_mirror";
	return 0;
}

Csatellite_mirror::Csatellite_mirror()
{
	this->my_init();
}

Csatellite_mirror::~Csatellite_mirror()
{

}

#ifndef SATELLITE_MIRROR_TEST
#define SATELLITE_MIRROR_TEST 0//1
#endif

#if SATELLITE_MIRROR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
