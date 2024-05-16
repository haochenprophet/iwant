#include "satellite_projector.h"
int Csatellite_projector::my_init(void *p)
{
	this->name = "Csatellite_projector";
	this->alias = "satellite_projector";
	return 0;
}

Csatellite_projector::Csatellite_projector()
{
	this->my_init();
}

Csatellite_projector::~Csatellite_projector()
{

}

#ifndef SATELLITE_PROJECTOR_TEST
#define SATELLITE_PROJECTOR_TEST 0//1
#endif

#if SATELLITE_PROJECTOR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
