#include "car_location.h"
int Ccar_location::my_init(void *p)
{
	this->name = "Ccar_location";
	this->alias = "car_location";
	return 0;
}

Ccar_location::Ccar_location()
{
	this->my_init();
}

Ccar_location::~Ccar_location()
{

}

#ifndef CAR_LOCATION_TEST
#define CAR_LOCATION_TEST 0//1
#endif

#if CAR_LOCATION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
