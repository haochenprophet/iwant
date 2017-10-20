#include "VEXTRACTF32x4.h"
int CVEXTRACTF32x4::my_init(void *p)
{
	this->name = "CVEXTRACTF32x4";
	this->alias = "VEXTRACTF32x4";
	return 0;
}

CVEXTRACTF32x4::CVEXTRACTF32x4()
{
	this->my_init();
}

CVEXTRACTF32x4::~CVEXTRACTF32x4()
{

}
