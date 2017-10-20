#include "VPSRLVD.h"
int CVPSRLVD::my_init(void *p)
{
	this->name = "CVPSRLVD";
	this->alias = "VPSRLVD";
	return 0;
}

CVPSRLVD::CVPSRLVD()
{
	this->my_init();
}

CVPSRLVD::~CVPSRLVD()
{

}
