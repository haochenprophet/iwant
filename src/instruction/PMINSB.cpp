#include "PMINSB.h"
int CPMINSB::my_init(void *p)
{
	this->name = "CPMINSB";
	this->alias = "PMINSB";
	return 0;
}

CPMINSB::CPMINSB()
{
	this->my_init();
}

CPMINSB::~CPMINSB()
{

}
