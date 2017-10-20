#include "MINPD.h"
int CMINPD::my_init(void *p)
{
	this->name = "CMINPD";
	this->alias = "MINPD";
	return 0;
}

CMINPD::CMINPD()
{
	this->my_init();
}

CMINPD::~CMINPD()
{

}
