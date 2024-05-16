#include "earth_communication.h"
int Cearth_communication::my_init(void *p)
{
	this->name = "Cearth_communication";
	this->alias = "earth_communication";
	return 0;
}

Cearth_communication::Cearth_communication()
{
	this->my_init();
}

Cearth_communication::~Cearth_communication()
{

}

#ifndef EARTH_COMMUNICATION_TEST
#define EARTH_COMMUNICATION_TEST 0//1
#endif

#if EARTH_COMMUNICATION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
