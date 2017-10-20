#include "VGATHERDPS.h"
int CVGATHERDPS::my_init(void *p)
{
	this->name = "CVGATHERDPS";
	this->alias = "VGATHERDPS";
	return 0;
}

CVGATHERDPS::CVGATHERDPS()
{
	this->my_init();
}

CVGATHERDPS::~CVGATHERDPS()
{

}
