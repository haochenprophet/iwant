#include "radar_width.h"
int Cradar_width::my_init(void *p)
{
	this->name = "Cradar_width";
	this->alias = "radar_width";
	return 0;
}

Cradar_width::Cradar_width()
{
	this->my_init();
}

Cradar_width::~Cradar_width()
{

}

#ifndef RADAR_WIDTH_TEST
#define RADAR_WIDTH_TEST 0//1
#endif

#if RADAR_WIDTH_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
