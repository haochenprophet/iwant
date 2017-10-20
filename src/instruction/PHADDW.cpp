#include "PHADDW.h"
int CPHADDW::my_init(void *p)
{
	this->name = "CPHADDW";
	this->alias = "PHADDW";
	return 0;
}

CPHADDW::CPHADDW()
{
	this->my_init();
}

CPHADDW::~CPHADDW()
{

}
