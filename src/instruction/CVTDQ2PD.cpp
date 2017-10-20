#include "CVTDQ2PD.h"
int CCVTDQ2PD::my_init(void *p)
{
	this->name = "CCVTDQ2PD";
	this->alias = "CVTDQ2PD";
	return 0;
}

CCVTDQ2PD::CCVTDQ2PD()
{
	this->my_init();
}

CCVTDQ2PD::~CCVTDQ2PD()
{

}
