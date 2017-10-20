#include "PCMPISTRM.h"
int CPCMPISTRM::my_init(void *p)
{
	this->name = "CPCMPISTRM";
	this->alias = "PCMPISTRM";
	return 0;
}

CPCMPISTRM::CPCMPISTRM()
{
	this->my_init();
}

CPCMPISTRM::~CPCMPISTRM()
{

}
