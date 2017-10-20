#include "PINSRW.h"
int CPINSRW::my_init(void *p)
{
	this->name = "CPINSRW";
	this->alias = "PINSRW";
	return 0;
}

CPINSRW::CPINSRW()
{
	this->my_init();
}

CPINSRW::~CPINSRW()
{

}
