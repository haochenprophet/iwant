#include "CVTPS2PD.h"
int CCVTPS2PD::my_init(void *p)
{
	this->name = "CCVTPS2PD";
	this->alias = "CVTPS2PD";
	return 0;
}

CCVTPS2PD::CCVTPS2PD()
{
	this->my_init();
}

CCVTPS2PD::~CCVTPS2PD()
{

}
