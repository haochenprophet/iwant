#include "VSCATTERDPD.h"
int CVSCATTERDPD::my_init(void *p)
{
	this->name = "CVSCATTERDPD";
	this->alias = "VSCATTERDPD";
	return 0;
}

CVSCATTERDPD::CVSCATTERDPD()
{
	this->my_init();
}

CVSCATTERDPD::~CVSCATTERDPD()
{

}
