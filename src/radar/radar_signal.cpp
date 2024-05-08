#include "radar_signal.h"
int Cradar_signal::my_init(void *p)
{
	this->name = "Cradar_signal";
	this->alias = "radar_signal";
	return 0;
}

Cradar_signal::Cradar_signal()
{
	this->my_init();
}

Cradar_signal::~Cradar_signal()
{

}

#ifndef RADAR_SIGNAL_TEST
#define RADAR_SIGNAL_TEST 0//1
#endif

#if RADAR_SIGNAL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
