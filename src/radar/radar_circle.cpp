#include "radar_circle.h"
int Cradar_circle::my_init(void *p)
{
	this->name = "Cradar_circle";
	this->alias = "radar_circle";
	return 0;
}

Cradar_circle::Cradar_circle()
{
	this->my_init();
}

Cradar_circle::~Cradar_circle()
{

}

#ifndef RADAR_CIRCLE_TEST
#define RADAR_CIRCLE_TEST 0//1
#endif

#if RADAR_CIRCLE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
