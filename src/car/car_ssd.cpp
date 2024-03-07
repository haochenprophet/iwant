#include "car_ssd.h"
int Ccar_ssd::my_init(void *p)
{
	this->name = "Ccar_ssd";
	this->alias = "car_ssd";
	return 0;
}

Ccar_ssd::Ccar_ssd()
{
	this->my_init();
}

Ccar_ssd::~Ccar_ssd()
{

}

#ifndef CAR_SSD_TEST
#define CAR_SSD_TEST 0//1
#endif

#if CAR_SSD_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
