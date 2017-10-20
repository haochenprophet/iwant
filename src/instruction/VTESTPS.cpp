#include "VTESTPS.h"
int CVTESTPS::my_init(void *p)
{
	this->name = "CVTESTPS";
	this->alias = "VTESTPS";
	return 0;
}

CVTESTPS::CVTESTPS()
{
	this->my_init();
}

CVTESTPS::~CVTESTPS()
{

}
