#include "car_oxygen.h"
int Ccar_oxygen::my_init(void *p)
{
	this->name = "Ccar_oxygen";
	this->alias = "car_oxygen";
	return 0;
}

Ccar_oxygen::Ccar_oxygen()
{
	this->my_init();
}

Ccar_oxygen::~Ccar_oxygen()
{

}

#ifndef CAR_OXYGEN_TEST
#define CAR_OXYGEN_TEST 0//1
#endif

#if CAR_OXYGEN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
