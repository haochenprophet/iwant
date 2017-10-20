#include "VPSRAVW.h"
int CVPSRAVW::my_init(void *p)
{
	this->name = "CVPSRAVW";
	this->alias = "VPSRAVW";
	return 0;
}

CVPSRAVW::CVPSRAVW()
{
	this->my_init();
}

CVPSRAVW::~CVPSRAVW()
{

}
