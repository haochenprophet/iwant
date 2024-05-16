#include "satellite_usb_port.h"
int Csatellite_usb_port::my_init(void *p)
{
	this->name = "Csatellite_usb_port";
	this->alias = "satellite_usb_port";
	return 0;
}

Csatellite_usb_port::Csatellite_usb_port()
{
	this->my_init();
}

Csatellite_usb_port::~Csatellite_usb_port()
{

}

#ifndef SATELLITE_USB_PORT_TEST
#define SATELLITE_USB_PORT_TEST 0//1
#endif

#if SATELLITE_USB_PORT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
