#include "FINCSTP.h"
int CFINCSTP::my_init(void *p)
{
	this->name = "CFINCSTP";
	this->alias = "FINCSTP";
	return 0;
}

CFINCSTP::CFINCSTP()
{
	this->my_init();
}

CFINCSTP::~CFINCSTP()
{

}
