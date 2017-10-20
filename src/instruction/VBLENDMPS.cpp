#include "VBLENDMPS.h"
int CVBLENDMPS::my_init(void *p)
{
	this->name = "CVBLENDMPS";
	this->alias = "VBLENDMPS";
	return 0;
}

CVBLENDMPS::CVBLENDMPS()
{
	this->my_init();
}

CVBLENDMPS::~CVBLENDMPS()
{

}
