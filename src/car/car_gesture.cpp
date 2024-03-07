#include "car_gesture.h"
int Ccar_gesture::my_init(void *p)
{
	this->name = "Ccar_gesture";
	this->alias = "car_gesture";
	return 0;
}

Ccar_gesture::Ccar_gesture()
{
	this->my_init();
}

Ccar_gesture::~Ccar_gesture()
{

}

#ifndef CAR_GESTURE_TEST
#define CAR_GESTURE_TEST 0//1
#endif

#if CAR_GESTURE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
