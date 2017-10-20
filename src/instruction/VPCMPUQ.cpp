#include "VPCMPUQ.h"
int CVPCMPUQ::my_init(void *p)
{
	this->name = "CVPCMPUQ";
	this->alias = "VPCMPUQ";
	return 0;
}

CVPCMPUQ::CVPCMPUQ()
{
	this->my_init();
}

CVPCMPUQ::~CVPCMPUQ()
{

}
