#include "VPCMPW.h"
int CVPCMPW::my_init(void *p)
{
	this->name = "CVPCMPW";
	this->alias = "VPCMPW";
	return 0;
}

CVPCMPW::CVPCMPW()
{
	this->my_init();
}

CVPCMPW::~CVPCMPW()
{

}
