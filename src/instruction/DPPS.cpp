#include "DPPS.h"
int CDPPS::my_init(void *p)
{
	this->name = "CDPPS";
	this->alias = "DPPS";
	return 0;
}

CDPPS::CDPPS()
{
	this->my_init();
}

CDPPS::~CDPPS()
{

}
