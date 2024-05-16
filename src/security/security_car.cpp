#include "security_car.h"
int Csecurity_car::my_init(void *p)
{
	this->name = "Csecurity_car";
	this->alias = "security_car";
	return 0;
}

Csecurity_car::Csecurity_car()
{
	this->my_init();
}

Csecurity_car::~Csecurity_car()
{

}

#ifndef SECURITY_CAR_TEST
#define SECURITY_CAR_TEST 0//1
#endif

#if SECURITY_CAR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
