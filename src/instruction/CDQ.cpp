#include "CDQ.h"
int CCDQ::my_init(void *p)
{
	this->name = "CCDQ";
	this->alias = "CDQ";
	return 0;
}

CCDQ::CCDQ()
{
	this->my_init();
}

CCDQ::~CCDQ()
{

}
