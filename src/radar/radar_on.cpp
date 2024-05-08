#include "radar_on.h"
int Cradar_on::my_init(void *p)
{
	this->name = "Cradar_on";
	this->alias = "radar_on";
	return 0;
}

Cradar_on::Cradar_on()
{
	this->my_init();
}

Cradar_on::~Cradar_on()
{

}

#ifndef RADAR_ON_TEST
#define RADAR_ON_TEST 0//1
#endif

#if RADAR_ON_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
