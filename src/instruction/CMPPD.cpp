#include "CMPPD.h"
int CCMPPD::my_init(void *p)
{
	this->name = "CCMPPD";
	this->alias = "CMPPD";
	return 0;
}

CCMPPD::CCMPPD()
{
	this->my_init();
}

CCMPPD::~CCMPPD()
{

}
