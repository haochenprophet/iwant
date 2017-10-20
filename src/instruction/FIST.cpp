#include "FIST.h"
int CFIST::my_init(void *p)
{
	this->name = "CFIST";
	this->alias = "FIST";
	return 0;
}

CFIST::CFIST()
{
	this->my_init();
}

CFIST::~CFIST()
{

}
