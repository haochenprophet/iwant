#include "car_refrigerator.h"
int Ccar_refrigerator::my_init(void *p)
{
	this->name = "Ccar_refrigerator";
	this->alias = "car_refrigerator";
	return 0;
}

Ccar_refrigerator::Ccar_refrigerator()
{
	this->my_init();
}

Ccar_refrigerator::~Ccar_refrigerator()
{

}

#ifndef CAR_REFRIGERATOR_TEST
#define CAR_REFRIGERATOR_TEST 0//1
#endif

#if CAR_REFRIGERATOR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
