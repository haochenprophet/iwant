#include "satellite_swerve.h"
int Csatellite_swerve::my_init(void *p)
{
	this->name = "Csatellite_swerve";
	this->alias = "satellite_swerve";
	return 0;
}

Csatellite_swerve::Csatellite_swerve()
{
	this->my_init();
}

Csatellite_swerve::~Csatellite_swerve()
{

}

#ifndef SATELLITE_SWERVE_TEST
#define SATELLITE_SWERVE_TEST 0//1
#endif

#if SATELLITE_SWERVE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
