#include "RCPPS.h"
int CRCPPS::my_init(void *p)
{
	this->name = "CRCPPS";
	this->alias = "RCPPS";
	return 0;
}

CRCPPS::CRCPPS()
{
	this->my_init();
}

CRCPPS::~CRCPPS()
{

}
