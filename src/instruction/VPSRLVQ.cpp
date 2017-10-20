#include "VPSRLVQ.h"
int CVPSRLVQ::my_init(void *p)
{
	this->name = "CVPSRLVQ";
	this->alias = "VPSRLVQ";
	return 0;
}

CVPSRLVQ::CVPSRLVQ()
{
	this->my_init();
}

CVPSRLVQ::~CVPSRLVQ()
{

}
