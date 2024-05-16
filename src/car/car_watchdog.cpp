#include "car_watchdog.h"
int Ccar_watchdog::my_init(void *p)
{
	this->name = "Ccar_watchdog";
	this->alias = "car_watchdog";
	return 0;
}

Ccar_watchdog::Ccar_watchdog()
{
	this->my_init();
}

Ccar_watchdog::~Ccar_watchdog()
{

}

#ifndef CAR_WATCHDOG_TEST
#define CAR_WATCHDOG_TEST 0//1
#endif

#if CAR_WATCHDOG_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
