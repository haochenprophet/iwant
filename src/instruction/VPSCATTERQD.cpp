#include "VPSCATTERQD.h"
int CVPSCATTERQD::my_init(void *p)
{
	this->name = "CVPSCATTERQD";
	this->alias = "VPSCATTERQD";
	return 0;
}

CVPSCATTERQD::CVPSCATTERQD()
{
	this->my_init();
}

CVPSCATTERQD::~CVPSCATTERQD()
{

}
