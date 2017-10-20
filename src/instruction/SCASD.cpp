#include "SCASD.h"
int CSCASD::my_init(void *p)
{
	this->name = "CSCASD";
	this->alias = "SCASD";
	return 0;
}

CSCASD::CSCASD()
{
	this->my_init();
}

CSCASD::~CSCASD()
{

}
