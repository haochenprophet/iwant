#include "rocket_speed.h"
int Crocket_speed::my_init(void *p)
{
	this->name = "Crocket_speed";
	this->alias = "rocket_speed";
	return 0;
}

Crocket_speed::Crocket_speed()
{
	this->my_init();
}

Crocket_speed::~Crocket_speed()
{

}

#ifndef ROCKET_SPEED_TEST
#define ROCKET_SPEED_TEST 0//1
#endif

#if ROCKET_SPEED_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
