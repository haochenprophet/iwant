#include "PMULHRSW.h"
int CPMULHRSW::my_init(void *p)
{
	this->name = "CPMULHRSW";
	this->alias = "PMULHRSW";
	return 0;
}

CPMULHRSW::CPMULHRSW()
{
	this->my_init();
}

CPMULHRSW::~CPMULHRSW()
{

}
