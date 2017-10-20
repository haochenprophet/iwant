#include "VPCMPB.h"
int CVPCMPB::my_init(void *p)
{
	this->name = "CVPCMPB";
	this->alias = "VPCMPB";
	return 0;
}

CVPCMPB::CVPCMPB()
{
	this->my_init();
}

CVPCMPB::~CVPCMPB()
{

}
