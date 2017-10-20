#include "MOVMSKPD.h"
int CMOVMSKPD::my_init(void *p)
{
	this->name = "CMOVMSKPD";
	this->alias = "MOVMSKPD";
	return 0;
}

CMOVMSKPD::CMOVMSKPD()
{
	this->my_init();
}

CMOVMSKPD::~CMOVMSKPD()
{

}
