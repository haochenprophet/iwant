#include "VEXTRACTF64x2.h"
int CVEXTRACTF64x2::my_init(void *p)
{
	this->name = "CVEXTRACTF64x2";
	this->alias = "VEXTRACTF64x2";
	return 0;
}

CVEXTRACTF64x2::CVEXTRACTF64x2()
{
	this->my_init();
}

CVEXTRACTF64x2::~CVEXTRACTF64x2()
{

}
