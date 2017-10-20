#include "VTESTPD.h"
int CVTESTPD::my_init(void *p)
{
	this->name = "CVTESTPD";
	this->alias = "VTESTPD";
	return 0;
}

CVTESTPD::CVTESTPD()
{
	this->my_init();
}

CVTESTPD::~CVTESTPD()
{

}
