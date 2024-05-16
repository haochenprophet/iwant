#include "radar_direction.h"
int Cradar_direction::my_init(void *p)
{
	this->name = "Cradar_direction";
	this->alias = "radar_direction";
	return 0;
}

Cradar_direction::Cradar_direction()
{
	this->my_init();
}

Cradar_direction::~Cradar_direction()
{

}

#ifndef RADAR_DIRECTION_TEST
#define RADAR_DIRECTION_TEST 0//1
#endif

#if RADAR_DIRECTION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
