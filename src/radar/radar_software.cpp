#include "radar_software.h"
int Cradar_software::my_init(void *p)
{
	this->name = "Cradar_software";
	this->alias = "radar_software";
	return 0;
}

Cradar_software::Cradar_software()
{
	this->my_init();
}

Cradar_software::~Cradar_software()
{

}

#ifndef RADAR_SOFTWARE_TEST
#define RADAR_SOFTWARE_TEST 0//1
#endif

#if RADAR_SOFTWARE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
