#include "VFIXUPIMMPD.h"
int CVFIXUPIMMPD::my_init(void *p)
{
	this->name = "CVFIXUPIMMPD";
	this->alias = "VFIXUPIMMPD";
	return 0;
}

CVFIXUPIMMPD::CVFIXUPIMMPD()
{
	this->my_init();
}

CVFIXUPIMMPD::~CVFIXUPIMMPD()
{

}
