#include "VCVTSS2USI.h"
int CVCVTSS2USI::my_init(void *p)
{
	this->name = "CVCVTSS2USI";
	this->alias = "VCVTSS2USI";
	return 0;
}

CVCVTSS2USI::CVCVTSS2USI()
{
	this->my_init();
}

CVCVTSS2USI::~CVCVTSS2USI()
{

}
