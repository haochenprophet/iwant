#include "airplane_radar.h"
int Cairplane_radar::my_init(void *p)
{
	this->name = "Cairplane_radar";
	this->alias = "airplane_radar";
	return 0;
}

Cairplane_radar::Cairplane_radar()
{
	this->my_init();
}

Cairplane_radar::~Cairplane_radar()
{

}

#ifndef AIRPLANE_RADAR_TEST
#define AIRPLANE_RADAR_TEST 0//1
#endif

#if AIRPLANE_RADAR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
