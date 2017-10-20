#include "VEXPANDPD.h"
int CVEXPANDPD::my_init(void *p)
{
	this->name = "CVEXPANDPD";
	this->alias = "VEXPANDPD";
	return 0;
}

CVEXPANDPD::CVEXPANDPD()
{
	this->my_init();
}

CVEXPANDPD::~CVEXPANDPD()
{

}
