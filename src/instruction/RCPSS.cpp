#include "RCPSS.h"
int CRCPSS::my_init(void *p)
{
	this->name = "CRCPSS";
	this->alias = "RCPSS";
	return 0;
}

CRCPSS::CRCPSS()
{
	this->my_init();
}

CRCPSS::~CRCPSS()
{

}
