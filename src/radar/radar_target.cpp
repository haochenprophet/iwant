#include "radar_target.h"
int Cradar_target::my_init(void *p)
{
	this->name = "Cradar_target";
	this->alias = "radar_target";
	return 0;
}

Cradar_target::Cradar_target()
{
	this->my_init();
}

Cradar_target::~Cradar_target()
{

}

#ifndef RADAR_TARGET_TEST
#define RADAR_TARGET_TEST 0//1
#endif

#if RADAR_TARGET_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
