#include "radar_meteorology.h"
int Cradar_meteorology::my_init(void *p)
{
	this->name = "Cradar_meteorology";
	this->alias = "radar_meteorology";
	return 0;
}

Cradar_meteorology::Cradar_meteorology()
{
	this->my_init();
}

Cradar_meteorology::~Cradar_meteorology()
{

}

#ifndef RADAR_METEOROLOGY_TEST
#define RADAR_METEOROLOGY_TEST 0//1
#endif

#if RADAR_METEOROLOGY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
