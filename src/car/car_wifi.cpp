#include "car_wifi.h"
int Ccar_wifi::my_init(void *p)
{
	this->name = "Ccar_wifi";
	this->alias = "car_wifi";
	return 0;
}

Ccar_wifi::Ccar_wifi()
{
	this->my_init();
}

Ccar_wifi::~Ccar_wifi()
{

}

#ifndef CAR_WIFI_TEST
#define CAR_WIFI_TEST 0//1
#endif

#if CAR_WIFI_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
