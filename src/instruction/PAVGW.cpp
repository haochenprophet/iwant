#include "PAVGW.h"
int CPAVGW::my_init(void *p)
{
	this->name = "CPAVGW";
	this->alias = "PAVGW";
	return 0;
}

CPAVGW::CPAVGW()
{
	this->my_init();
}

CPAVGW::~CPAVGW()
{

}
