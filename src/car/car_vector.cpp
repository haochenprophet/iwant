#include "car_vector.h"
int Ccar_vector::my_init(void *p)
{
	this->name = "Ccar_vector";
	this->alias = "car_vector";
	return 0;
}

Ccar_vector::Ccar_vector()
{
	this->my_init();
}

Ccar_vector::~Ccar_vector()
{

}

#ifndef CAR_VECTOR_TEST
#define CAR_VECTOR_TEST 0//1
#endif

#if CAR_VECTOR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
