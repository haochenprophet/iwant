#include "VPBLENDMQ.h"
int CVPBLENDMQ::my_init(void *p)
{
	this->name = "CVPBLENDMQ";
	this->alias = "VPBLENDMQ";
	return 0;
}

CVPBLENDMQ::CVPBLENDMQ()
{
	this->my_init();
}

CVPBLENDMQ::~CVPBLENDMQ()
{

}
