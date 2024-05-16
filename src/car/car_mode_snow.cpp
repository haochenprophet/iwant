#include "car_mode_snow.h"
int Ccar_mode_snow::my_init(void *p)
{
	this->name = "Ccar_mode_snow";
	this->alias = "car_mode_snow";
	return 0;
}

Ccar_mode_snow::Ccar_mode_snow()
{
	this->my_init();
}

Ccar_mode_snow::~Ccar_mode_snow()
{

}

#ifndef CAR_MODE_SNOW_TEST
#define CAR_MODE_SNOW_TEST 0//1
#endif

#if CAR_MODE_SNOW_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
