#include "PCMPEQQ.h"
int CPCMPEQQ::my_init(void *p)
{
	this->name = "CPCMPEQQ";
	this->alias = "PCMPEQQ";
	return 0;
}

CPCMPEQQ::CPCMPEQQ()
{
	this->my_init();
}

CPCMPEQQ::~CPCMPEQQ()
{

}
