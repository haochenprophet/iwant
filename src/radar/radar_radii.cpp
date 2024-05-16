#include "radar_radii.h"
int Cradar_radii::my_init(void *p)
{
	this->name = "Cradar_radii";
	this->alias = "radar_radii";
	return 0;
}

Cradar_radii::Cradar_radii()
{
	this->my_init();
}

Cradar_radii::~Cradar_radii()
{

}

#ifndef RADAR_RADII_TEST
#define RADAR_RADII_TEST 0//1
#endif

#if RADAR_RADII_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
