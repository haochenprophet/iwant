#include "ANDPD.h"
int CANDPD::my_init(void *p)
{
	this->name = "CANDPD";
	this->alias = "ANDPD";
	return 0;
}

CANDPD::CANDPD()
{
	this->my_init();
}

CANDPD::~CANDPD()
{

}
