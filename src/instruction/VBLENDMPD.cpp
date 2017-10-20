#include "VBLENDMPD.h"
int CVBLENDMPD::my_init(void *p)
{
	this->name = "CVBLENDMPD";
	this->alias = "VBLENDMPD";
	return 0;
}

CVBLENDMPD::CVBLENDMPD()
{
	this->my_init();
}

CVBLENDMPD::~CVBLENDMPD()
{

}
