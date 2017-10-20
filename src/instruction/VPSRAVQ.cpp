#include "VPSRAVQ.h"
int CVPSRAVQ::my_init(void *p)
{
	this->name = "CVPSRAVQ";
	this->alias = "VPSRAVQ";
	return 0;
}

CVPSRAVQ::CVPSRAVQ()
{
	this->my_init();
}

CVPSRAVQ::~CVPSRAVQ()
{

}
