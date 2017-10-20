#include "MAXSD.h"
int CMAXSD::my_init(void *p)
{
	this->name = "CMAXSD";
	this->alias = "MAXSD";
	return 0;
}

CMAXSD::CMAXSD()
{
	this->my_init();
}

CMAXSD::~CMAXSD()
{

}
