#include "PAVGB.h"
int CPAVGB::my_init(void *p)
{
	this->name = "CPAVGB";
	this->alias = "PAVGB";
	return 0;
}

CPAVGB::CPAVGB()
{
	this->my_init();
}

CPAVGB::~CPAVGB()
{

}
