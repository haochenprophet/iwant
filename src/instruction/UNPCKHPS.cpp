#include "UNPCKHPS.h"
int CUNPCKHPS::my_init(void *p)
{
	this->name = "CUNPCKHPS";
	this->alias = "UNPCKHPS";
	return 0;
}

CUNPCKHPS::CUNPCKHPS()
{
	this->my_init();
}

CUNPCKHPS::~CUNPCKHPS()
{

}
