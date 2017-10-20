#include "VPSRAVD.h"
int CVPSRAVD::my_init(void *p)
{
	this->name = "CVPSRAVD";
	this->alias = "VPSRAVD";
	return 0;
}

CVPSRAVD::CVPSRAVD()
{
	this->my_init();
}

CVPSRAVD::~CVPSRAVD()
{

}
