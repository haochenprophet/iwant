#include "BLENDVPD.h"
int CBLENDVPD::my_init(void *p)
{
	this->name = "CBLENDVPD";
	this->alias = "BLENDVPD";
	return 0;
}

CBLENDVPD::CBLENDVPD()
{
	this->my_init();
}

CBLENDVPD::~CBLENDVPD()
{

}
