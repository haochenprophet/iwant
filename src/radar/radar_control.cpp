#include "radar_control.h"
int Cradar_control::my_init(void *p)
{
	this->name = "Cradar_control";
	this->alias = "radar_control";
	return 0;
}

Cradar_control::Cradar_control()
{
	this->my_init();
}

Cradar_control::~Cradar_control()
{

}

#ifndef RADAR_CONTROL_TEST
#define RADAR_CONTROL_TEST 0//1
#endif

#if RADAR_CONTROL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
