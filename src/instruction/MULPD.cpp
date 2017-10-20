#include "MULPD.h"
int CMULPD::my_init(void *p)
{
	this->name = "CMULPD";
	this->alias = "MULPD";
	return 0;
}

CMULPD::CMULPD()
{
	this->my_init();
}

CMULPD::~CMULPD()
{

}
