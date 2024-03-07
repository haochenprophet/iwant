#include "car_bluetooth.h"
int Ccar_bluetooth::my_init(void *p)
{
	this->name = "Ccar_bluetooth";
	this->alias = "car_bluetooth";
	return 0;
}

Ccar_bluetooth::Ccar_bluetooth()
{
	this->my_init();
}

Ccar_bluetooth::~Ccar_bluetooth()
{

}

#ifndef CAR_BLUETOOTH_TEST
#define CAR_BLUETOOTH_TEST 0//1
#endif

#if CAR_BLUETOOTH_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
