#include "VSCALEFSD.h"
int CVSCALEFSD::my_init(void *p)
{
	this->name = "CVSCALEFSD";
	this->alias = "VSCALEFSD";
	return 0;
}

CVSCALEFSD::CVSCALEFSD()
{
	this->my_init();
}

CVSCALEFSD::~CVSCALEFSD()
{

}
