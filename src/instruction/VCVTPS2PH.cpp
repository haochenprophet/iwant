#include "VCVTPS2PH.h"
int CVCVTPS2PH::my_init(void *p)
{
	this->name = "CVCVTPS2PH";
	this->alias = "VCVTPS2PH";
	return 0;
}

CVCVTPS2PH::CVCVTPS2PH()
{
	this->my_init();
}

CVCVTPS2PH::~CVCVTPS2PH()
{

}
