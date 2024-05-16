#include "car_clock.h"
int Ccar_clock::my_init(void *p)
{
	this->name = "Ccar_clock";
	this->alias = "car_clock";
	return 0;
}

Ccar_clock::Ccar_clock()
{
	this->my_init();
}

Ccar_clock::~Ccar_clock()
{

}

#ifndef CAR_CLOCK_TEST
#define CAR_CLOCK_TEST 0//1
#endif

#if CAR_CLOCK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
