#include "car_safety.h"
int Ccar_safety::my_init(void *p)
{
	this->name = "Ccar_safety";
	this->alias = "car_safety";
	return 0;
}

Ccar_safety::Ccar_safety()
{
	this->my_init();
}

Ccar_safety::~Ccar_safety()
{

}

#ifndef CAR_SAFETY_TEST
#define CAR_SAFETY_TEST 0//1
#endif

#if CAR_SAFETY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
