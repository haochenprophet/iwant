#include "radar_communication.h"
int Cradar_communication::my_init(void *p)
{
	this->name = "Cradar_communication";
	this->alias = "radar_communication";
	return 0;
}

Cradar_communication::Cradar_communication()
{
	this->my_init();
}

Cradar_communication::~Cradar_communication()
{

}

#ifndef RADAR_COMMUNICATION_TEST
#define RADAR_COMMUNICATION_TEST 0//1
#endif

#if RADAR_COMMUNICATION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
