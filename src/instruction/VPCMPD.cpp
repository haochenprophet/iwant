#include "VPCMPD.h"
int CVPCMPD::my_init(void *p)
{
	this->name = "CVPCMPD";
	this->alias = "VPCMPD";
	return 0;
}

CVPCMPD::CVPCMPD()
{
	this->my_init();
}

CVPCMPD::~CVPCMPD()
{

}
