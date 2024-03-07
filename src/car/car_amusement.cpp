#include "car_amusement.h"
int Ccar_amusement::my_init(void *p)
{
	this->name = "Ccar_amusement";
	this->alias = "car_amusement";
	return 0;
}

Ccar_amusement::Ccar_amusement()
{
	this->my_init();
}

Ccar_amusement::~Ccar_amusement()
{

}

#ifndef CAR_AMUSEMENT_TEST
#define CAR_AMUSEMENT_TEST 0//1
#endif

#if CAR_AMUSEMENT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
