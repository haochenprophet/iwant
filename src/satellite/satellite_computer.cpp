#include "satellite_computer.h"
int Csatellite_computer::my_init(void *p)
{
	this->name = "Csatellite_computer";
	this->alias = "satellite_computer";
	return 0;
}

Csatellite_computer::Csatellite_computer()
{
	this->my_init();
}

Csatellite_computer::~Csatellite_computer()
{

}

#ifndef SATELLITE_COMPUTER_TEST
#define SATELLITE_COMPUTER_TEST 0//1
#endif

#if SATELLITE_COMPUTER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
