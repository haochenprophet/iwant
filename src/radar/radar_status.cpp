#include "radar_status.h"
int Cradar_status::my_init(void *p)
{
	this->name = "Cradar_status";
	this->alias = "radar_status";
	return 0;
}

Cradar_status::Cradar_status()
{
	this->my_init();
}

Cradar_status::~Cradar_status()
{

}

#ifndef RADAR_STATUS_TEST
#define RADAR_STATUS_TEST 0//1
#endif

#if RADAR_STATUS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
