#include "radar_speed.h"
int Cradar_speed::my_init(void *p)
{
	this->name = "Cradar_speed";
	this->alias = "radar_speed";
	return 0;
}

Cradar_speed::Cradar_speed()
{
	this->my_init();
}

Cradar_speed::~Cradar_speed()
{

}

#ifndef RADAR_SPEED_TEST
#define RADAR_SPEED_TEST 0//1
#endif

#if RADAR_SPEED_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
