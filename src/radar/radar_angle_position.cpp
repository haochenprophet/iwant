#include "radar_angle_position.h"
int Cradar_angle_position::my_init(void *p)
{
	this->name = "Cradar_angle_position";
	this->alias = "radar_angle_position";
	return 0;
}

Cradar_angle_position::Cradar_angle_position()
{
	this->my_init();
}

Cradar_angle_position::~Cradar_angle_position()
{

}

#ifndef RADAR_ANGLE_POSITION_TEST
#define RADAR_ANGLE_POSITION_TEST 0//1
#endif

#if RADAR_ANGLE_POSITION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
