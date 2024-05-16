#include "car_alerts.h"
int Ccar_alerts::my_init(void *p)
{
	this->name = "Ccar_alerts";
	this->alias = "car_alerts";
	return 0;
}

Ccar_alerts::Ccar_alerts()
{
	this->my_init();
}

Ccar_alerts::~Ccar_alerts()
{

}

#ifndef CAR_ALERTS_TEST
#define CAR_ALERTS_TEST 0//1
#endif

#if CAR_ALERTS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
