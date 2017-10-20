#include "STOSD.h"
int CSTOSD::my_init(void *p)
{
	this->name = "CSTOSD";
	this->alias = "STOSD";
	return 0;
}

CSTOSD::CSTOSD()
{
	this->my_init();
}

CSTOSD::~CSTOSD()
{

}
