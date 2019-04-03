#include "usb.h"
int Cusb::my_init(void *p)
{
	this->name = "Cusb";
	this->alias = "usb";
	return 0;
}

Cusb::Cusb()
{
	this->my_init();
}

Cusb::~Cusb()
{

}

#ifndef USB_TEST
#define USB_TEST 0//1
#endif

#if USB_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "USB_TEST\n\n";

	return 0;
}
#endif 