#include "earth_medicine.h"
int Cearth_medicine::my_init(void *p)
{
	this->name = "Cearth_medicine";
	this->alias = "earth_medicine";
	return 0;
}

Cearth_medicine::Cearth_medicine()
{
	this->my_init();
}

Cearth_medicine::~Cearth_medicine()
{

}

#ifndef EARTH_MEDICINE_TEST
#define EARTH_MEDICINE_TEST 0//1
#endif

#if EARTH_MEDICINE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
