#include "VCOMPRESSPD.h"
int CVCOMPRESSPD::my_init(void *p)
{
	this->name = "CVCOMPRESSPD";
	this->alias = "VCOMPRESSPD";
	return 0;
}

CVCOMPRESSPD::CVCOMPRESSPD()
{
	this->my_init();
}

CVCOMPRESSPD::~CVCOMPRESSPD()
{

}
