#include "SQRTPD.h"
int CSQRTPD::my_init(void *p)
{
	this->name = "CSQRTPD";
	this->alias = "SQRTPD";
	return 0;
}

CSQRTPD::CSQRTPD()
{
	this->my_init();
}

CSQRTPD::~CSQRTPD()
{

}
