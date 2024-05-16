#include "radar.h"
int Cradar::my_init(void *p)
{
	this->name = "Cradar";
	this->alias = "radar";
	return 0;
}

Cradar::Cradar()
{
	this->my_init();
}

Cradar::~Cradar()
{

}

#ifndef RADAR_TEST
#define RADAR_TEST 0//1
#endif

#if RADAR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
