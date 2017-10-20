#include "PBLENDW.h"
int CPBLENDW::my_init(void *p)
{
	this->name = "CPBLENDW";
	this->alias = "PBLENDW";
	return 0;
}

CPBLENDW::CPBLENDW()
{
	this->my_init();
}

CPBLENDW::~CPBLENDW()
{

}
