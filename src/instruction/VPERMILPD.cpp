#include "VPERMILPD.h"
int CVPERMILPD::my_init(void *p)
{
	this->name = "CVPERMILPD";
	this->alias = "VPERMILPD";
	return 0;
}

CVPERMILPD::CVPERMILPD()
{
	this->my_init();
}

CVPERMILPD::~CVPERMILPD()
{

}
