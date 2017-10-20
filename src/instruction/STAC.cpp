#include "STAC.h"
int CSTAC::my_init(void *p)
{
	this->name = "CSTAC";
	this->alias = "STAC";
	return 0;
}

CSTAC::CSTAC()
{
	this->my_init();
}

CSTAC::~CSTAC()
{

}
