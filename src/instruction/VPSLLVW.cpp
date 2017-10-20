#include "VPSLLVW.h"
int CVPSLLVW::my_init(void *p)
{
	this->name = "CVPSLLVW";
	this->alias = "VPSLLVW";
	return 0;
}

CVPSLLVW::CVPSLLVW()
{
	this->my_init();
}

CVPSLLVW::~CVPSLLVW()
{

}
