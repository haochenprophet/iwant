#include "PCMPEQD.h"
int CPCMPEQD::my_init(void *p)
{
	this->name = "CPCMPEQD";
	this->alias = "PCMPEQD";
	return 0;
}

CPCMPEQD::CPCMPEQD()
{
	this->my_init();
}

CPCMPEQD::~CPCMPEQD()
{

}
