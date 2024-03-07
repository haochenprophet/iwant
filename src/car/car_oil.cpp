#include "car_oil.h"
int Ccar_oil::my_init(void *p)
{
	this->name = "Ccar_oil";
	this->alias = "car_oil";
	return 0;
}

Ccar_oil::Ccar_oil()
{
	this->my_init();
}

Ccar_oil::~Ccar_oil()
{

}

#ifndef CAR_OIL_TEST
#define CAR_OIL_TEST 0//1
#endif

#if CAR_OIL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
