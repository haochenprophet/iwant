#include "PHSUBSW.h"
int CPHSUBSW::my_init(void *p)
{
	this->name = "CPHSUBSW";
	this->alias = "PHSUBSW";
	return 0;
}

CPHSUBSW::CPHSUBSW()
{
	this->my_init();
}

CPHSUBSW::~CPHSUBSW()
{

}
