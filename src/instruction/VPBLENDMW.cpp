#include "VPBLENDMW.h"
int CVPBLENDMW::my_init(void *p)
{
	this->name = "CVPBLENDMW";
	this->alias = "VPBLENDMW";
	return 0;
}

CVPBLENDMW::CVPBLENDMW()
{
	this->my_init();
}

CVPBLENDMW::~CVPBLENDMW()
{

}
