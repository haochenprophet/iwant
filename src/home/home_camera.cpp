#include "home_camera.h"
int Chome_camera::my_init(void *p)
{
	this->name = "Chome_camera";
	this->alias = "home_camera";
	return 0;
}

Chome_camera::Chome_camera()
{
	this->my_init();
}

Chome_camera::~Chome_camera()
{

}

#ifndef HOME_CAMERA_TEST
#define HOME_CAMERA_TEST 0//1
#endif

#if HOME_CAMERA_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
