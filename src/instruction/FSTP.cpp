#include "FSTP.h"
int CFSTP::my_init(void *p)
{
	this->name = "CFSTP";
	this->alias = "FSTP";
	return 0;
}

CFSTP::CFSTP()
{
	this->my_init();
}

CFSTP::~CFSTP()
{

}
