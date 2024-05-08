#include "radar_system.h"
int Cradar_system::my_init(void *p)
{
	this->name = "Cradar_system";
	this->alias = "radar_system";
	return 0;
}

Cradar_system::Cradar_system()
{
	this->my_init();
}

Cradar_system::~Cradar_system()
{

}

#ifndef RADAR_SYSTEM_TEST
#define RADAR_SYSTEM_TEST 0//1
#endif

#if RADAR_SYSTEM_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
