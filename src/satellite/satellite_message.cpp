#include "satellite_message.h"
int Csatellite_message::my_init(void *p)
{
	this->name = "Csatellite_message";
	this->alias = "satellite_message";
	return 0;
}

Csatellite_message::Csatellite_message()
{
	this->my_init();
}

Csatellite_message::~Csatellite_message()
{

}

#ifndef SATELLITE_MESSAGE_TEST
#define SATELLITE_MESSAGE_TEST 0//1
#endif

#if SATELLITE_MESSAGE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
