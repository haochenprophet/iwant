#include "car_start.h"
int Ccar_start::my_init(void *p)
{
	this->name = "Ccar_start";
	this->alias = "car_start";
	return 0;
}

Ccar_start::Ccar_start()
{
	this->my_init();
}

Ccar_start::~Ccar_start()
{

}

#ifndef CAR_START_TEST
#define CAR_START_TEST 0//1
#endif

#if CAR_START_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
