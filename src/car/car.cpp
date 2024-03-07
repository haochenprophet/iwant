#include "car.h"
int Ccar::my_init(void *p)
{
	this->name = "Ccar";
	this->alias = "car";
	return 0;
}

Ccar::Ccar()
{
	this->my_init();
}

Ccar::~Ccar()
{

}

#ifndef CAR_TEST
#define CAR_TEST 0//1
#endif

#if CAR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
