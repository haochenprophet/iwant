#include "CVTPI2PD.h"
int CCVTPI2PD::my_init(void *p)
{
	this->name = "CCVTPI2PD";
	this->alias = "CVTPI2PD";
	return 0;
}

CCVTPI2PD::CCVTPI2PD()
{
	this->my_init();
}

CCVTPI2PD::~CCVTPI2PD()
{

}
