#include "HADDPD.h"
int CHADDPD::my_init(void *p)
{
	this->name = "CHADDPD";
	this->alias = "HADDPD";
	return 0;
}

CHADDPD::CHADDPD()
{
	this->my_init();
}

CHADDPD::~CHADDPD()
{

}
