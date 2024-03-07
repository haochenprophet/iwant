#include "car_cluth.h"
int Ccar_cluth::my_init(void *p)
{
	this->name = "Ccar_cluth";
	this->alias = "car_cluth";
	return 0;
}

Ccar_cluth::Ccar_cluth()
{
	this->my_init();
}

Ccar_cluth::~Ccar_cluth()
{

}

#ifndef CAR_CLUTH_TEST
#define CAR_CLUTH_TEST 0//1
#endif

#if CAR_CLUTH_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
