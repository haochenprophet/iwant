#include "PMAXSB.h"
int CPMAXSB::my_init(void *p)
{
	this->name = "CPMAXSB";
	this->alias = "PMAXSB";
	return 0;
}

CPMAXSB::CPMAXSB()
{
	this->my_init();
}

CPMAXSB::~CPMAXSB()
{

}
