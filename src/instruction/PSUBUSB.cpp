#include "PSUBUSB.h"
int CPSUBUSB::my_init(void *p)
{
	this->name = "CPSUBUSB";
	this->alias = "PSUBUSB";
	return 0;
}

CPSUBUSB::CPSUBUSB()
{
	this->my_init();
}

CPSUBUSB::~CPSUBUSB()
{

}
