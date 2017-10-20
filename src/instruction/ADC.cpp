#include "ADC.h"
int CADC::my_init(void *p)
{
	this->name = "CADC";
	this->alias = "ADC";
	return 0;
}

CADC::CADC()
{
	this->my_init();
}

CADC::~CADC()
{

}
