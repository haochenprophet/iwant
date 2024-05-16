#include "car_alarm.h"
int Ccar_alarm::my_init(void *p)
{
	this->name = "Ccar_alarm";
	this->alias = "car_alarm";
	return 0;
}

Ccar_alarm::Ccar_alarm()
{
	this->my_init();
}

Ccar_alarm::~Ccar_alarm()
{

}

#ifndef CAR_ALARM_TEST
#define CAR_ALARM_TEST 0//1
#endif

#if CAR_ALARM_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
