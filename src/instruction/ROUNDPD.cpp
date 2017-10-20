#include "ROUNDPD.h"
int CROUNDPD::my_init(void *p)
{
	this->name = "CROUNDPD";
	this->alias = "ROUNDPD";
	return 0;
}

CROUNDPD::CROUNDPD()
{
	this->my_init();
}

CROUNDPD::~CROUNDPD()
{

}
