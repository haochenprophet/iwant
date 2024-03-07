#include "car_infrared.h"
int Ccar_infrared::my_init(void *p)
{
	this->name = "Ccar_infrared";
	this->alias = "car_infrared";
	return 0;
}

Ccar_infrared::Ccar_infrared()
{
	this->my_init();
}

Ccar_infrared::~Ccar_infrared()
{

}

#ifndef CAR_INFRARED_TEST
#define CAR_INFRARED_TEST 0//1
#endif

#if CAR_INFRARED_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
