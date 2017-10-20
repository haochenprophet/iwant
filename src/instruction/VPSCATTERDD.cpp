#include "VPSCATTERDD.h"
int CVPSCATTERDD::my_init(void *p)
{
	this->name = "CVPSCATTERDD";
	this->alias = "VPSCATTERDD";
	return 0;
}

CVPSCATTERDD::CVPSCATTERDD()
{
	this->my_init();
}

CVPSCATTERDD::~CVPSCATTERDD()
{

}
