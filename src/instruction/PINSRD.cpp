#include "PINSRD.h"
int CPINSRD::my_init(void *p)
{
	this->name = "CPINSRD";
	this->alias = "PINSRD";
	return 0;
}

CPINSRD::CPINSRD()
{
	this->my_init();
}

CPINSRD::~CPINSRD()
{

}
