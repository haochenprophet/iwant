#include "UNPCKHPD.h"
int CUNPCKHPD::my_init(void *p)
{
	this->name = "CUNPCKHPD";
	this->alias = "UNPCKHPD";
	return 0;
}

CUNPCKHPD::CUNPCKHPD()
{
	this->my_init();
}

CUNPCKHPD::~CUNPCKHPD()
{

}
