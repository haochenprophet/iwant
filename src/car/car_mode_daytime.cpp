#include "car_mode_daytime.h"
int Ccar_mode_daytime::my_init(void *p)
{
	this->name = "Ccar_mode_daytime";
	this->alias = "car_mode_daytime";
	return 0;
}

Ccar_mode_daytime::Ccar_mode_daytime()
{
	this->my_init();
}

Ccar_mode_daytime::~Ccar_mode_daytime()
{

}

#ifndef CAR_MODE_DAYTIME_TEST
#define CAR_MODE_DAYTIME_TEST 0//1
#endif

#if CAR_MODE_DAYTIME_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
