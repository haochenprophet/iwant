#include "VPTERNLOGD.h"
int CVPTERNLOGD::my_init(void *p)
{
	this->name = "CVPTERNLOGD";
	this->alias = "VPTERNLOGD";
	return 0;
}

CVPTERNLOGD::CVPTERNLOGD()
{
	this->my_init();
}

CVPTERNLOGD::~CVPTERNLOGD()
{

}
