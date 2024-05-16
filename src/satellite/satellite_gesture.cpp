#include "satellite_gesture.h"
int Csatellite_gesture::my_init(void *p)
{
	this->name = "Csatellite_gesture";
	this->alias = "satellite_gesture";
	return 0;
}

Csatellite_gesture::Csatellite_gesture()
{
	this->my_init();
}

Csatellite_gesture::~Csatellite_gesture()
{

}

#ifndef SATELLITE_GESTURE_TEST
#define SATELLITE_GESTURE_TEST 0//1
#endif

#if SATELLITE_GESTURE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
