#include "ADDPD.h"
int CADDPD::my_init(void *p)
{
	this->name = "CADDPD";
	this->alias = "ADDPD";
	return 0;
}

CADDPD::CADDPD()
{
	this->my_init();
}

CADDPD::~CADDPD()
{

}
