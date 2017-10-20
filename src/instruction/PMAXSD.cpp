#include "PMAXSD.h"
int CPMAXSD::my_init(void *p)
{
	this->name = "CPMAXSD";
	this->alias = "PMAXSD";
	return 0;
}

CPMAXSD::CPMAXSD()
{
	this->my_init();
}

CPMAXSD::~CPMAXSD()
{

}
