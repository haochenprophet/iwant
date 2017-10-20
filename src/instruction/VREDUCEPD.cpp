#include "VREDUCEPD.h"
int CVREDUCEPD::my_init(void *p)
{
	this->name = "CVREDUCEPD";
	this->alias = "VREDUCEPD";
	return 0;
}

CVREDUCEPD::CVREDUCEPD()
{
	this->my_init();
}

CVREDUCEPD::~CVREDUCEPD()
{

}
