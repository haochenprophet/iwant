#include "VPCMPQ.h"
int CVPCMPQ::my_init(void *p)
{
	this->name = "CVPCMPQ";
	this->alias = "VPCMPQ";
	return 0;
}

CVPCMPQ::CVPCMPQ()
{
	this->my_init();
}

CVPCMPQ::~CVPCMPQ()
{

}
