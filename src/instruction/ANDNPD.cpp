#include "ANDNPD.h"
int CANDNPD::my_init(void *p)
{
	this->name = "CANDNPD";
	this->alias = "ANDNPD";
	return 0;
}

CANDNPD::CANDNPD()
{
	this->my_init();
}

CANDNPD::~CANDNPD()
{

}
