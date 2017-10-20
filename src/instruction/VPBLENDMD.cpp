#include "VPBLENDMD.h"
int CVPBLENDMD::my_init(void *p)
{
	this->name = "CVPBLENDMD";
	this->alias = "VPBLENDMD";
	return 0;
}

CVPBLENDMD::CVPBLENDMD()
{
	this->my_init();
}

CVPBLENDMD::~CVPBLENDMD()
{

}
