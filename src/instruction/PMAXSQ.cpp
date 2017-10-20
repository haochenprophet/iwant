#include "PMAXSQ.h"
int CPMAXSQ::my_init(void *p)
{
	this->name = "CPMAXSQ";
	this->alias = "PMAXSQ";
	return 0;
}

CPMAXSQ::CPMAXSQ()
{
	this->my_init();
}

CPMAXSQ::~CPMAXSQ()
{

}
