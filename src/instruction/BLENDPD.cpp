#include "BLENDPD.h"
int CBLENDPD::my_init(void *p)
{
	this->name = "CBLENDPD";
	this->alias = "BLENDPD";
	return 0;
}

CBLENDPD::CBLENDPD()
{
	this->my_init();
}

CBLENDPD::~CBLENDPD()
{

}
