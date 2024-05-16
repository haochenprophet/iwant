#include "spaceport_camera.h"
int Cspaceport_camera::my_init(void *p)
{
	this->name = "Cspaceport_camera";
	this->alias = "spaceport_camera";
	return 0;
}

Cspaceport_camera::Cspaceport_camera()
{
	this->my_init();
}

Cspaceport_camera::~Cspaceport_camera()
{

}

#ifndef SPACEPORT_CAMERA_TEST
#define SPACEPORT_CAMERA_TEST 0//1
#endif

#if SPACEPORT_CAMERA_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
