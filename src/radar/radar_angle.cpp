#include "radar_angle.h"
int Cradar_angle::my_init(void *p)
{
	this->name = "Cradar_angle";
	this->alias = "radar_angle";
	return 0;
}

Cradar_angle::Cradar_angle()
{
	this->my_init();
}

Cradar_angle::~Cradar_angle()
{

}

#ifndef RADAR_ANGLE_TEST
#define RADAR_ANGLE_TEST 0//1
#endif

#if RADAR_ANGLE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
