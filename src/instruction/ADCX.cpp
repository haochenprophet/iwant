#include "ADCX.h"
int CADCX::my_init(void *p)
{
	this->name = "CADCX";
	this->alias = "ADCX";
	return 0;
}

CADCX::CADCX()
{
	this->my_init();
}

CADCX::~CADCX()
{

}
