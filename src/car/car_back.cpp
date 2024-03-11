#include "car_back.h"
int Ccar_back::my_init(void *p)
{
	this->name = "Ccar_back";
	this->alias = "car_back";
	return 0;
}

Ccar_back::Ccar_back()
{
	this->my_init();
}

Ccar_back::~Ccar_back()
{

}

#ifndef CAR_BACK_TEST
#define CAR_BACK_TEST 0//1
#endif

#if CAR_BACK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
