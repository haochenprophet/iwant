#include "car_abs.h"
int Ccar_abs::my_init(void *p)
{
	this->name = "Ccar_abs";
	this->alias = "car_abs";
	return 0;
}

Ccar_abs::Ccar_abs()
{
	this->my_init();
}

Ccar_abs::~Ccar_abs()
{

}

#ifndef CAR_ABS_TEST
#define CAR_ABS_TEST 0//1
#endif

#if CAR_ABS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
