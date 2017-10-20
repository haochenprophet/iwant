#include "MAXPD.h"
int CMAXPD::my_init(void *p)
{
	this->name = "CMAXPD";
	this->alias = "MAXPD";
	return 0;
}

CMAXPD::CMAXPD()
{
	this->my_init();
}

CMAXPD::~CMAXPD()
{

}
