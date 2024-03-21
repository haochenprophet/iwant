#include "satellite_command.h"
int Csatellite_command::my_init(void *p)
{
	this->name = "Csatellite_command";
	this->alias = "satellite_command";
	return 0;
}

Csatellite_command::Csatellite_command()
{
	this->my_init();
}

Csatellite_command::~Csatellite_command()
{

}

#ifndef SATELLITE_COMMAND_TEST
#define SATELLITE_COMMAND_TEST 0//1
#endif

#if SATELLITE_COMMAND_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
