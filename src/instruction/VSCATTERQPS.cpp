#include "VSCATTERQPS.h"
int CVSCATTERQPS::my_init(void *p)
{
	this->name = "CVSCATTERQPS";
	this->alias = "VSCATTERQPS";
	return 0;
}

CVSCATTERQPS::CVSCATTERQPS()
{
	this->my_init();
}

CVSCATTERQPS::~CVSCATTERQPS()
{

}
