#include "VEXTRACTF32x8.h"
int CVEXTRACTF32x8::my_init(void *p)
{
	this->name = "CVEXTRACTF32x8";
	this->alias = "VEXTRACTF32x8";
	return 0;
}

CVEXTRACTF32x8::CVEXTRACTF32x8()
{
	this->my_init();
}

CVEXTRACTF32x8::~CVEXTRACTF32x8()
{

}
