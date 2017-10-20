#include "VPRORQ.h"
int CVPRORQ::my_init(void *p)
{
	this->name = "CVPRORQ";
	this->alias = "VPRORQ";
	return 0;
}

CVPRORQ::CVPRORQ()
{
	this->my_init();
}

CVPRORQ::~CVPRORQ()
{

}
