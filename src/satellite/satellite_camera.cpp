#include "satellite_camera.h"
int Csatellite_camera::my_init(void *p)
{
	this->name = "Csatellite_camera";
	this->alias = "satellite_camera";
	return 0;
}

Csatellite_camera::Csatellite_camera()
{
	this->my_init();
}

Csatellite_camera::~Csatellite_camera()
{

}

#ifndef SATELLITE_CAMERA_TEST
#define SATELLITE_CAMERA_TEST 0//1
#endif

#if SATELLITE_CAMERA_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
