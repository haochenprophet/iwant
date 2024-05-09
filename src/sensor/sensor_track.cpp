#include "sensor_track.h"
int Csensor_track::my_init(void *p)
{
	this->name = "Csensor_track";
	this->alias = "sensor_track";
	return 0;
}

Csensor_track::Csensor_track()
{
	this->my_init();
}

Csensor_track::~Csensor_track()
{

}

#ifndef SENSOR_TRACK_TEST
#define SENSOR_TRACK_TEST 0//1
#endif

#if SENSOR_TRACK_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
