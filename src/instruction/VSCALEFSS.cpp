#include "VSCALEFSS.h"
int CVSCALEFSS::my_init(void *p)
{
	this->name = "CVSCALEFSS";
	this->alias = "VSCALEFSS";
	return 0;
}

CVSCALEFSS::CVSCALEFSS()
{
	this->my_init();
}

CVSCALEFSS::~CVSCALEFSS()
{

}
