#include "car_mode_rain.h"
int Ccar_mode_rain::my_init(void *p)
{
	this->name = "Ccar_mode_rain";
	this->alias = "car_mode_rain";
	return 0;
}

Ccar_mode_rain::Ccar_mode_rain()
{
	this->my_init();
}

Ccar_mode_rain::~Ccar_mode_rain()
{

}

#ifndef CAR_MODE_RAIN_TEST
#define CAR_MODE_RAIN_TEST 0//1
#endif

#if CAR_MODE_RAIN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
