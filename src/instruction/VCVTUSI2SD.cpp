#include "VCVTUSI2SD.h"
int CVCVTUSI2SD::my_init(void *p)
{
	this->name = "CVCVTUSI2SD";
	this->alias = "VCVTUSI2SD";
	return 0;
}

CVCVTUSI2SD::CVCVTUSI2SD()
{
	this->my_init();
}

CVCVTUSI2SD::~CVCVTUSI2SD()
{

}
