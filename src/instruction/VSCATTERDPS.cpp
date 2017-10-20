#include "VSCATTERDPS.h"
int CVSCATTERDPS::my_init(void *p)
{
	this->name = "CVSCATTERDPS";
	this->alias = "VSCATTERDPS";
	return 0;
}

CVSCATTERDPS::CVSCATTERDPS()
{
	this->my_init();
}

CVSCATTERDPS::~CVSCATTERDPS()
{

}
