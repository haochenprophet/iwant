#include "VPERMPS.h"
int CVPERMPS::my_init(void *p)
{
	this->name = "CVPERMPS";
	this->alias = "VPERMPS";
	return 0;
}

CVPERMPS::CVPERMPS()
{
	this->my_init();
}

CVPERMPS::~CVPERMPS()
{

}
