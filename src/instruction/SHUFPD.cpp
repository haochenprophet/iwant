#include "SHUFPD.h"
int CSHUFPD::my_init(void *p)
{
	this->name = "CSHUFPD";
	this->alias = "SHUFPD";
	return 0;
}

CSHUFPD::CSHUFPD()
{
	this->my_init();
}

CSHUFPD::~CSHUFPD()
{

}
