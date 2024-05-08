#include "radar_off.h"
int Cradar_off::my_init(void *p)
{
	this->name = "Cradar_off";
	this->alias = "radar_off";
	return 0;
}

Cradar_off::Cradar_off()
{
	this->my_init();
}

Cradar_off::~Cradar_off()
{

}

#ifndef RADAR_OFF_TEST
#define RADAR_OFF_TEST 0//1
#endif

#if RADAR_OFF_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
