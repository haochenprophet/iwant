#include "VPMOVSQB.h"
int CVPMOVSQB::my_init(void *p)
{
	this->name = "CVPMOVSQB";
	this->alias = "VPMOVSQB";
	return 0;
}

CVPMOVSQB::CVPMOVSQB()
{
	this->my_init();
}

CVPMOVSQB::~CVPMOVSQB()
{

}
