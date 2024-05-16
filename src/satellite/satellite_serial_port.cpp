#include "satellite_serial_port.h"
int Csatellite_serial_port::my_init(void *p)
{
	this->name = "Csatellite_serial_port";
	this->alias = "satellite_serial_port";
	return 0;
}

Csatellite_serial_port::Csatellite_serial_port()
{
	this->my_init();
}

Csatellite_serial_port::~Csatellite_serial_port()
{

}

#ifndef SATELLITE_SERIAL_PORT_TEST
#define SATELLITE_SERIAL_PORT_TEST 0//1
#endif

#if SATELLITE_SERIAL_PORT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
