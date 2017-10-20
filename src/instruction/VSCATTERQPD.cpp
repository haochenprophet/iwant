#include "VSCATTERQPD.h"
int CVSCATTERQPD::my_init(void *p)
{
	this->name = "CVSCATTERQPD";
	this->alias = "VSCATTERQPD";
	return 0;
}

CVSCATTERQPD::CVSCATTERQPD()
{
	this->my_init();
}

CVSCATTERQPD::~CVSCATTERQPD()
{

}
