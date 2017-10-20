#include "PCMPEQB.h"
int CPCMPEQB::my_init(void *p)
{
	this->name = "CPCMPEQB";
	this->alias = "PCMPEQB";
	return 0;
}

CPCMPEQB::CPCMPEQB()
{
	this->my_init();
}

CPCMPEQB::~CPCMPEQB()
{

}
