#include "VPSLLVQ.h"
int CVPSLLVQ::my_init(void *p)
{
	this->name = "CVPSLLVQ";
	this->alias = "VPSLLVQ";
	return 0;
}

CVPSLLVQ::CVPSLLVQ()
{
	this->my_init();
}

CVPSLLVQ::~CVPSLLVQ()
{

}
