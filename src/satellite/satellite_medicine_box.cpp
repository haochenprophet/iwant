#include "satellite_medicine_box.h"
int Csatellite_medicine_box::my_init(void *p)
{
	this->name = "Csatellite_medicine_box";
	this->alias = "satellite_medicine_box";
	return 0;
}

Csatellite_medicine_box::Csatellite_medicine_box()
{
	this->my_init();
}

Csatellite_medicine_box::~Csatellite_medicine_box()
{

}

#ifndef SATELLITE_MEDICINE_BOX_TEST
#define SATELLITE_MEDICINE_BOX_TEST 0//1
#endif

#if SATELLITE_MEDICINE_BOX_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
