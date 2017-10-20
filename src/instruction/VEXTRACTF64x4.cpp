#include "VEXTRACTF64x4.h"
int CVEXTRACTF64x4::my_init(void *p)
{
	this->name = "CVEXTRACTF64x4";
	this->alias = "VEXTRACTF64x4";
	return 0;
}

CVEXTRACTF64x4::CVEXTRACTF64x4()
{
	this->my_init();
}

CVEXTRACTF64x4::~CVEXTRACTF64x4()
{

}
