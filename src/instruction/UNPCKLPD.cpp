#include "UNPCKLPD.h"
int CUNPCKLPD::my_init(void *p)
{
	this->name = "CUNPCKLPD";
	this->alias = "UNPCKLPD";
	return 0;
}

CUNPCKLPD::CUNPCKLPD()
{
	this->my_init();
}

CUNPCKLPD::~CUNPCKLPD()
{

}
