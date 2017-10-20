#include "VPCMPUB.h"
int CVPCMPUB::my_init(void *p)
{
	this->name = "CVPCMPUB";
	this->alias = "VPCMPUB";
	return 0;
}

CVPCMPUB::CVPCMPUB()
{
	this->my_init();
}

CVPCMPUB::~CVPCMPUB()
{

}
