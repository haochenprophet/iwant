#include "FSAVE.h"
int CFSAVE::my_init(void *p)
{
	this->name = "CFSAVE";
	this->alias = "FSAVE";
	return 0;
}

CFSAVE::CFSAVE()
{
	this->my_init();
}

CFSAVE::~CFSAVE()
{

}
