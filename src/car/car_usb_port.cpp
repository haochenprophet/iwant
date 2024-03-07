#include "car_usb_port.h"
int Ccar_usb_port::my_init(void *p)
{
	this->name = "Ccar_usb_port";
	this->alias = "car_usb_port";
	return 0;
}

Ccar_usb_port::Ccar_usb_port()
{
	this->my_init();
}

Ccar_usb_port::~Ccar_usb_port()
{

}

#ifndef CAR_USB_PORT_TEST
#define CAR_USB_PORT_TEST 0//1
#endif

#if CAR_USB_PORT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
