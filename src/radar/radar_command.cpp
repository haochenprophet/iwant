#include "radar_command.h"
int Cradar_command::my_init(void *p)
{
	this->name = "Cradar_command";
	this->alias = "radar_command";
	return 0;
}

Cradar_command::Cradar_command()
{
	this->my_init();
}

Cradar_command::~Cradar_command()
{

}

#ifndef RADAR_COMMAND_TEST
#define RADAR_COMMAND_TEST 0//1
#endif

#if RADAR_COMMAND_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
