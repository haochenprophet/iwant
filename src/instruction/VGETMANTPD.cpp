#include "VGETMANTPD.h"
int CVGETMANTPD::my_init(void *p)
{
	this->name = "CVGETMANTPD";
	this->alias = "VGETMANTPD";
	return 0;
}

CVGETMANTPD::CVGETMANTPD()
{
	this->my_init();
}

CVGETMANTPD::~CVGETMANTPD()
{

}
