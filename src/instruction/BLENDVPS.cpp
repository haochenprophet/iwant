#include "BLENDVPS.h"
int CBLENDVPS::my_init(void *p)
{
	this->name = "CBLENDVPS";
	this->alias = "BLENDVPS";
	return 0;
}

CBLENDVPS::CBLENDVPS()
{
	this->my_init();
}

CBLENDVPS::~CBLENDVPS()
{

}
