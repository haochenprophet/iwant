#include "VPERMILPS.h"
int CVPERMILPS::my_init(void *p)
{
	this->name = "CVPERMILPS";
	this->alias = "VPERMILPS";
	return 0;
}

CVPERMILPS::CVPERMILPS()
{
	this->my_init();
}

CVPERMILPS::~CVPERMILPS()
{

}
