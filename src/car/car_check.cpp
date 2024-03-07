#include "car_check.h"
int Ccar_check::my_init(void *p)
{
	this->name = "Ccar_check";
	this->alias = "car_check";
	return 0;
}

Ccar_check::Ccar_check()
{
	this->my_init();
}

Ccar_check::~Ccar_check()
{

}

#ifndef CAR_CHECK_TEST
#define CAR_CHECK_TEST 0//1
#endif

#if CAR_CHECK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
