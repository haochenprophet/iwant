#include "MAXPS.h"
int CMAXPS::my_init(void *p)
{
	this->name = "CMAXPS";
	this->alias = "MAXPS";
	return 0;
}

CMAXPS::CMAXPS()
{
	this->my_init();
}

CMAXPS::~CMAXPS()
{

}
