#include "VSCALEFPD.h"
int CVSCALEFPD::my_init(void *p)
{
	this->name = "CVSCALEFPD";
	this->alias = "VSCALEFPD";
	return 0;
}

CVSCALEFPD::CVSCALEFPD()
{
	this->my_init();
}

CVSCALEFPD::~CVSCALEFPD()
{

}
