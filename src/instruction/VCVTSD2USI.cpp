#include "VCVTSD2USI.h"
int CVCVTSD2USI::my_init(void *p)
{
	this->name = "CVCVTSD2USI";
	this->alias = "VCVTSD2USI";
	return 0;
}

CVCVTSD2USI::CVCVTSD2USI()
{
	this->my_init();
}

CVCVTSD2USI::~CVCVTSD2USI()
{

}
