#include "car_stop.h"
int Ccar_stop::my_init(void *p)
{
	this->name = "Ccar_stop";
	this->alias = "car_stop";
	return 0;
}

Ccar_stop::Ccar_stop()
{
	this->my_init();
}

Ccar_stop::~Ccar_stop()
{

}

#ifndef CAR_STOP_TEST
#define CAR_STOP_TEST 0//1
#endif

#if CAR_STOP_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
