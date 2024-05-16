#include "car_mode_night.h"
int Ccar_mode_night::my_init(void *p)
{
	this->name = "Ccar_mode_night";
	this->alias = "car_mode_night";
	return 0;
}

Ccar_mode_night::Ccar_mode_night()
{
	this->my_init();
}

Ccar_mode_night::~Ccar_mode_night()
{

}

#ifndef CAR_MODE_NIGHT_TEST
#define CAR_MODE_NIGHT_TEST 0//1
#endif

#if CAR_MODE_NIGHT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
