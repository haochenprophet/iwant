#include "car_camera.h"
int Ccar_camera::my_init(void *p)
{
	this->name = "Ccar_camera";
	this->alias = "car_camera";
	return 0;
}

Ccar_camera::Ccar_camera()
{
	this->my_init();
}

Ccar_camera::~Ccar_camera()
{

}

#ifndef CAR_CAMERA_TEST
#define CAR_CAMERA_TEST 0//1
#endif

#if CAR_CAMERA_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
