#include "car_brake_pad.h"
int Ccar_brake_pad::my_init(void *p)
{
	this->name = "Ccar_brake_pad";
	this->alias = "car_brake_pad";
	return 0;
}

Ccar_brake_pad::Ccar_brake_pad()
{
	this->my_init();
}

Ccar_brake_pad::~Ccar_brake_pad()
{

}

#ifndef CAR_BRAKE_PAD_TEST
#define CAR_BRAKE_PAD_TEST 0//1
#endif

#if CAR_BRAKE_PAD_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
