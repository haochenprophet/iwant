#include "VINSERTF64x4.h"
int CVINSERTF64x4::my_init(void *p)
{
	this->name = "CVINSERTF64x4";
	this->alias = "VINSERTF64x4";
	return 0;
}

CVINSERTF64x4::CVINSERTF64x4()
{
	this->my_init();
}

CVINSERTF64x4::~CVINSERTF64x4()
{

}
