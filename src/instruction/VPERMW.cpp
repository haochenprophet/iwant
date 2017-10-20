#include "VPERMW.h"
int CVPERMW::my_init(void *p)
{
	this->name = "CVPERMW";
	this->alias = "VPERMW";
	return 0;
}

CVPERMW::CVPERMW()
{
	this->my_init();
}

CVPERMW::~CVPERMW()
{

}
