#include "car_region.h"
int Ccar_region::my_init(void *p)
{
	this->name = "Ccar_region";
	this->alias = "car_region";
	return 0;
}

Ccar_region::Ccar_region()
{
	this->my_init();
}

Ccar_region::~Ccar_region()
{

}

#ifndef CAR_REGION_TEST
#define CAR_REGION_TEST 0//1
#endif

#if CAR_REGION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
