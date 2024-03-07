#include "car_sensor.h"
int Ccar_sensor::my_init(void *p)
{
	this->name = "Ccar_sensor";
	this->alias = "car_sensor";
	return 0;
}

Ccar_sensor::Ccar_sensor()
{
	this->my_init();
}

Ccar_sensor::~Ccar_sensor()
{

}

#ifndef CAR_SENSOR_TEST
#define CAR_SENSOR_TEST 0//1
#endif

#if CAR_SENSOR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
