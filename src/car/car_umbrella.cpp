#include "car_umbrella.h"
int Ccar_umbrella::my_init(void *p)
{
	this->name = "Ccar_umbrella";
	this->alias = "car_umbrella";
	return 0;
}

Ccar_umbrella::Ccar_umbrella()
{
	this->my_init();
}

Ccar_umbrella::~Ccar_umbrella()
{

}

#ifndef CAR_UMBRELLA_TEST
#define CAR_UMBRELLA_TEST 0//1
#endif

#if CAR_UMBRELLA_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
