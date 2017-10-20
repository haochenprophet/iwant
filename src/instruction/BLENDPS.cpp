#include "BLENDPS.h"
int CBLENDPS::my_init(void *p)
{
	this->name = "CBLENDPS";
	this->alias = "BLENDPS";
	return 0;
}

CBLENDPS::CBLENDPS()
{
	this->my_init();
}

CBLENDPS::~CBLENDPS()
{

}
