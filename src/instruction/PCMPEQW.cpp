#include "PCMPEQW.h"
int CPCMPEQW::my_init(void *p)
{
	this->name = "CPCMPEQW";
	this->alias = "PCMPEQW";
	return 0;
}

CPCMPEQW::CPCMPEQW()
{
	this->my_init();
}

CPCMPEQW::~CPCMPEQW()
{

}
