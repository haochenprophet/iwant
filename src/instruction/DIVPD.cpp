#include "DIVPD.h"
int CDIVPD::my_init(void *p)
{
	this->name = "CDIVPD";
	this->alias = "DIVPD";
	return 0;
}

CDIVPD::CDIVPD()
{
	this->my_init();
}

CDIVPD::~CDIVPD()
{

}
