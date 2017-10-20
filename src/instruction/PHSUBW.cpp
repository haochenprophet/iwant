#include "PHSUBW.h"
int CPHSUBW::my_init(void *p)
{
	this->name = "CPHSUBW";
	this->alias = "PHSUBW";
	return 0;
}

CPHSUBW::CPHSUBW()
{
	this->my_init();
}

CPHSUBW::~CPHSUBW()
{

}
