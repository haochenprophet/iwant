#include "VPBLENDMB.h"
int CVPBLENDMB::my_init(void *p)
{
	this->name = "CVPBLENDMB";
	this->alias = "VPBLENDMB";
	return 0;
}

CVPBLENDMB::CVPBLENDMB()
{
	this->my_init();
}

CVPBLENDMB::~CVPBLENDMB()
{

}
