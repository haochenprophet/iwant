#include "VPMOVSQD.h"
int CVPMOVSQD::my_init(void *p)
{
	this->name = "CVPMOVSQD";
	this->alias = "VPMOVSQD";
	return 0;
}

CVPMOVSQD::CVPMOVSQD()
{
	this->my_init();
}

CVPMOVSQD::~CVPMOVSQD()
{

}
