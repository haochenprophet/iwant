#include "RSQRTPS.h"
int CRSQRTPS::my_init(void *p)
{
	this->name = "CRSQRTPS";
	this->alias = "RSQRTPS";
	return 0;
}

CRSQRTPS::CRSQRTPS()
{
	this->my_init();
}

CRSQRTPS::~CRSQRTPS()
{

}
