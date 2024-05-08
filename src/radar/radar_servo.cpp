#include "radar_servo.h"
int Cradar_servo::my_init(void *p)
{
	this->name = "Cradar_servo";
	this->alias = "radar_servo";
	return 0;
}

Cradar_servo::Cradar_servo()
{
	this->my_init();
}

Cradar_servo::~Cradar_servo()
{

}

#ifndef RADAR_SERVO_TEST
#define RADAR_SERVO_TEST 0//1
#endif

#if RADAR_SERVO_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
