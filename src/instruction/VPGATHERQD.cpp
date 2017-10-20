#include "VPGATHERQD.h"
int CVPGATHERQD::my_init(void *p)
{
	this->name = "CVPGATHERQD";
	this->alias = "VPGATHERQD";
	return 0;
}

CVPGATHERQD::CVPGATHERQD()
{
	this->my_init();
}

CVPGATHERQD::~CVPGATHERQD()
{

}
