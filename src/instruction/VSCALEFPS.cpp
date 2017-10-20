#include "VSCALEFPS.h"
int CVSCALEFPS::my_init(void *p)
{
	this->name = "CVSCALEFPS";
	this->alias = "VSCALEFPS";
	return 0;
}

CVSCALEFPS::CVSCALEFPS()
{
	this->my_init();
}

CVSCALEFPS::~CVSCALEFPS()
{

}
