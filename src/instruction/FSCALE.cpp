#include "FSCALE.h"
int CFSCALE::my_init(void *p)
{
	this->name = "CFSCALE";
	this->alias = "FSCALE";
	return 0;
}

CFSCALE::CFSCALE()
{
	this->my_init();
}

CFSCALE::~CFSCALE()
{

}
