#include "radar_volume.h"
int Cradar_volume::my_init(void *p)
{
	this->name = "Cradar_volume";
	this->alias = "radar_volume";
	return 0;
}

Cradar_volume::Cradar_volume()
{
	this->my_init();
}

Cradar_volume::~Cradar_volume()
{

}

#ifndef RADAR_VOLUME_TEST
#define RADAR_VOLUME_TEST 0//1
#endif

#if RADAR_VOLUME_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
