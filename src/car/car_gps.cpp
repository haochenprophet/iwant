#include "car_gps.h"
int Ccar_gps::my_init(void *p)
{
	this->name = "Ccar_gps";
	this->alias = "car_gps";
	return 0;
}

Ccar_gps::Ccar_gps()
{
	this->my_init();
}

Ccar_gps::~Ccar_gps()
{

}

#ifndef CAR_GPS_TEST
#define CAR_GPS_TEST 0//1
#endif

#if CAR_GPS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
