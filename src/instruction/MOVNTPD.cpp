#include "MOVNTPD.h"
int CMOVNTPD::my_init(void *p)
{
	this->name = "CMOVNTPD";
	this->alias = "MOVNTPD";
	return 0;
}

CMOVNTPD::CMOVNTPD()
{
	this->my_init();
}

CMOVNTPD::~CMOVNTPD()
{

}
