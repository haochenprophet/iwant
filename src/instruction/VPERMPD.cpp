#include "VPERMPD.h"
int CVPERMPD::my_init(void *p)
{
	this->name = "CVPERMPD";
	this->alias = "VPERMPD";
	return 0;
}

CVPERMPD::CVPERMPD()
{
	this->my_init();
}

CVPERMPD::~CVPERMPD()
{

}
