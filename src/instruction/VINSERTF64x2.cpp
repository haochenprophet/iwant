#include "VINSERTF64x2.h"
int CVINSERTF64x2::my_init(void *p)
{
	this->name = "CVINSERTF64x2";
	this->alias = "VINSERTF64x2";
	return 0;
}

CVINSERTF64x2::CVINSERTF64x2()
{
	this->my_init();
}

CVINSERTF64x2::~CVINSERTF64x2()
{

}
