#include "car_glass.h"
int Ccar_glass::my_init(void *p)
{
	this->name = "Ccar_glass";
	this->alias = "car_glass";
	return 0;
}

Ccar_glass::Ccar_glass()
{
	this->my_init();
}

Ccar_glass::~Ccar_glass()
{

}

#ifndef CAR_GLASS_TEST
#define CAR_GLASS_TEST 0//1
#endif

#if CAR_GLASS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
