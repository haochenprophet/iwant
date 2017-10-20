#include "CBW.h"
int CCBW::my_init(void *p)
{
	this->name = "CCBW";
	this->alias = "CBW";
	return 0;
}

CCBW::CCBW()
{
	this->my_init();
}

CCBW::~CCBW()
{

}
