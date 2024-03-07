#include "car_rescue.h"
int Ccar_rescue::my_init(void *p)
{
	this->name = "Ccar_rescue";
	this->alias = "car_rescue";
	return 0;
}

Ccar_rescue::Ccar_rescue()
{
	this->my_init();
}

Ccar_rescue::~Ccar_rescue()
{

}

#ifndef CAR_RESCUE_TEST
#define CAR_RESCUE_TEST 0//1
#endif

#if CAR_RESCUE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
