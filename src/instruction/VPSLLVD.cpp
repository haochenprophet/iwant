#include "VPSLLVD.h"
int CVPSLLVD::my_init(void *p)
{
	this->name = "CVPSLLVD";
	this->alias = "VPSLLVD";
	return 0;
}

CVPSLLVD::CVPSLLVD()
{
	this->my_init();
}

CVPSLLVD::~CVPSLLVD()
{

}
