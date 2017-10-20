#include "VCVTTSD2USI.h"
int CVCVTTSD2USI::my_init(void *p)
{
	this->name = "CVCVTTSD2USI";
	this->alias = "VCVTTSD2USI";
	return 0;
}

CVCVTTSD2USI::CVCVTTSD2USI()
{
	this->my_init();
}

CVCVTTSD2USI::~CVCVTTSD2USI()
{

}
