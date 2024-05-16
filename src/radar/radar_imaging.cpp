#include "radar_imaging.h"
int Cradar_imaging::my_init(void *p)
{
	this->name = "Cradar_imaging";
	this->alias = "radar_imaging";
	return 0;
}

Cradar_imaging::Cradar_imaging()
{
	this->my_init();
}

Cradar_imaging::~Cradar_imaging()
{

}

#ifndef RADAR_IMAGING_TEST
#define RADAR_IMAGING_TEST 0//1
#endif

#if RADAR_IMAGING_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
