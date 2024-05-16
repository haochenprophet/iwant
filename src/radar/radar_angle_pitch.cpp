#include "radar_angle_pitch.h"
int Cradar_angle_pitch::my_init(void *p)
{
	this->name = "Cradar_angle_pitch";
	this->alias = "radar_angle_pitch";
	return 0;
}

Cradar_angle_pitch::Cradar_angle_pitch()
{
	this->my_init();
}

Cradar_angle_pitch::~Cradar_angle_pitch()
{

}

#ifndef RADAR_ANGLE_PITCH_TEST
#define RADAR_ANGLE_PITCH_TEST 0//1
#endif

#if RADAR_ANGLE_PITCH_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
