#include "PADDUSB.h"
int CPADDUSB::my_init(void *p)
{
	this->name = "CPADDUSB";
	this->alias = "PADDUSB";
	return 0;
}

CPADDUSB::CPADDUSB()
{
	this->my_init();
}

CPADDUSB::~CPADDUSB()
{

}
