#include "radar_display.h"
int Cradar_display::my_init(void *p)
{
	this->name = "Cradar_display";
	this->alias = "radar_display";
	return 0;
}

Cradar_display::Cradar_display()
{
	this->my_init();
}

Cradar_display::~Cradar_display()
{

}

#ifndef RADAR_DISPLAY_TEST
#define RADAR_DISPLAY_TEST 0//1
#endif

#if RADAR_DISPLAY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
