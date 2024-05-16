#include "radar_computer.h"
int Cradar_computer::my_init(void *p)
{
	this->name = "Cradar_computer";
	this->alias = "radar_computer";
	return 0;
}

Cradar_computer::Cradar_computer()
{
	this->my_init();
}

Cradar_computer::~Cradar_computer()
{

}

#ifndef RADAR_COMPUTER_TEST
#define RADAR_COMPUTER_TEST 0//1
#endif

#if RADAR_COMPUTER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
