#include "CVTPI2PS.h"
int CCVTPI2PS::my_init(void *p)
{
	this->name = "CCVTPI2PS";
	this->alias = "CVTPI2PS";
	return 0;
}

CCVTPI2PS::CCVTPI2PS()
{
	this->my_init();
}

CCVTPI2PS::~CCVTPI2PS()
{

}
