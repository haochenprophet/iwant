#include "PMULHW.h"
int CPMULHW::my_init(void *p)
{
	this->name = "CPMULHW";
	this->alias = "PMULHW";
	return 0;
}

CPMULHW::CPMULHW()
{
	this->my_init();
}

CPMULHW::~CPMULHW()
{

}
