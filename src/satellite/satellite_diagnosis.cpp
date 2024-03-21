#include "satellite_diagnosis.h"
int Csatellite_diagnosis::my_init(void *p)
{
	this->name = "Csatellite_diagnosis";
	this->alias = "satellite_diagnosis";
	return 0;
}

Csatellite_diagnosis::Csatellite_diagnosis()
{
	this->my_init();
}

Csatellite_diagnosis::~Csatellite_diagnosis()
{

}

#ifndef SATELLITE_DIAGNOSIS_TEST
#define SATELLITE_DIAGNOSIS_TEST 0//1
#endif

#if SATELLITE_DIAGNOSIS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
