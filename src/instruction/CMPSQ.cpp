#include "CMPSQ.h"
int CCMPSQ::my_init(void *p)
{
	this->name = "CCMPSQ";
	this->alias = "CMPSQ";
	return 0;
}

CCMPSQ::CCMPSQ()
{
	this->my_init();
}

CCMPSQ::~CCMPSQ()
{

}
