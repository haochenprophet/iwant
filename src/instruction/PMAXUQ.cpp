#include "PMAXUQ.h"
int CPMAXUQ::my_init(void *p)
{
	this->name = "CPMAXUQ";
	this->alias = "PMAXUQ";
	return 0;
}

CPMAXUQ::CPMAXUQ()
{
	this->my_init();
}

CPMAXUQ::~CPMAXUQ()
{

}
