#include "car_array.h"
int Ccar_array::my_init(void *p)
{
	this->name = "Ccar_array";
	this->alias = "car_array";
	return 0;
}

Ccar_array::Ccar_array()
{
	this->my_init();
}

Ccar_array::~Ccar_array()
{

}

#ifndef CAR_ARRAY_TEST
#define CAR_ARRAY_TEST 0//1
#endif

#if CAR_ARRAY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
