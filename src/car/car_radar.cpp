#include "car_radar.h"
int Ccar_radar::my_init(void *p)
{
	this->name = "Ccar_radar";
	this->alias = "car_radar";
	return 0;
}

Ccar_radar::Ccar_radar()
{
	this->my_init();
}

Ccar_radar::~Ccar_radar()
{

}

#ifndef CAR_RADAR_TEST
#define CAR_RADAR_TEST 0//1
#endif

#if CAR_RADAR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
