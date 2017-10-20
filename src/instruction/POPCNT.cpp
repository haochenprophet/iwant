#include "POPCNT.h"
int CPOPCNT::my_init(void *p)
{
	this->name = "CPOPCNT";
	this->alias = "POPCNT";
	return 0;
}

CPOPCNT::CPOPCNT()
{
	this->my_init();
}

CPOPCNT::~CPOPCNT()
{

}
