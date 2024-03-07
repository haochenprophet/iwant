#include "car_phone.h"
int Ccar_phone::my_init(void *p)
{
	this->name = "Ccar_phone";
	this->alias = "car_phone";
	return 0;
}

Ccar_phone::Ccar_phone()
{
	this->my_init();
}

Ccar_phone::~Ccar_phone()
{

}

#ifndef CAR_PHONE_TEST
#define CAR_PHONE_TEST 0//1
#endif

#if CAR_PHONE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
