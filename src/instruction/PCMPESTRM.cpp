#include "PCMPESTRM.h"
int CPCMPESTRM::my_init(void *p)
{
	this->name = "CPCMPESTRM";
	this->alias = "PCMPESTRM";
	return 0;
}

CPCMPESTRM::CPCMPESTRM()
{
	this->my_init();
}

CPCMPESTRM::~CPCMPESTRM()
{

}
