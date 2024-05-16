#include "car_humidness.h"
int Ccar_humidness::my_init(void *p)
{
	this->name = "Ccar_humidness";
	this->alias = "car_humidness";
	return 0;
}

Ccar_humidness::Ccar_humidness()
{
	this->my_init();
}

Ccar_humidness::~Ccar_humidness()
{

}

#ifndef CAR_HUMIDNESS_TEST
#define CAR_HUMIDNESS_TEST 0//1
#endif

#if CAR_HUMIDNESS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
