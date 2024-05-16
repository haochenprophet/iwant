#include "radar_height.h"
int Cradar_height::my_init(void *p)
{
	this->name = "Cradar_height";
	this->alias = "radar_height";
	return 0;
}

Cradar_height::Cradar_height()
{
	this->my_init();
}

Cradar_height::~Cradar_height()
{

}

#ifndef RADAR_HEIGHT_TEST
#define RADAR_HEIGHT_TEST 0//1
#endif

#if RADAR_HEIGHT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
