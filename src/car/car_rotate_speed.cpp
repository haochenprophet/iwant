#include "car_rotate_speed.h"
int Ccar_rotate_speed::my_init(void *p)
{
	this->name = "Ccar_rotate_speed";
	this->alias = "car_rotate_speed";
	return 0;
}

Ccar_rotate_speed::Ccar_rotate_speed()
{
	this->my_init();
}

Ccar_rotate_speed::~Ccar_rotate_speed()
{

}

#ifndef CAR_ROTATE_SPEED_TEST
#define CAR_ROTATE_SPEED_TEST 0//1
#endif

#if CAR_ROTATE_SPEED_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
