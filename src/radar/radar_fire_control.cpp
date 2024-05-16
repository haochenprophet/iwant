#include "radar_fire_control.h"
int Cradar_fire_control::my_init(void *p)
{
	this->name = "Cradar_fire_control";
	this->alias = "radar_fire_control";
	return 0;
}

Cradar_fire_control::Cradar_fire_control()
{
	this->my_init();
}

Cradar_fire_control::~Cradar_fire_control()
{

}

#ifndef RADAR_FIRE_CONTROL_TEST
#define RADAR_FIRE_CONTROL_TEST 0//1
#endif

#if RADAR_FIRE_CONTROL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
