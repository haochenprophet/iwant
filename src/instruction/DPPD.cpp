#include "DPPD.h"
int CDPPD::my_init(void *p)
{
	this->name = "CDPPD";
	this->alias = "DPPD";
	return 0;
}

CDPPD::CDPPD()
{
	this->my_init();
}

CDPPD::~CDPPD()
{

}
