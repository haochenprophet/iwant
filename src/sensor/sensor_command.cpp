#include "sensor_command.h"
int Csensor_command::my_init(void *p)
{
	this->name = "Csensor_command";
	this->alias = "sensor_command";
	return 0;
}

Csensor_command::Csensor_command()
{
	this->my_init();
}

Csensor_command::~Csensor_command()
{

}

#ifndef SENSOR_COMMAND_TEST
#define SENSOR_COMMAND_TEST 0//1
#endif

#if SENSOR_COMMAND_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
