#include "VINSERTF32x4.h"
int CVINSERTF32x4::my_init(void *p)
{
	this->name = "CVINSERTF32x4";
	this->alias = "VINSERTF32x4";
	return 0;
}

CVINSERTF32x4::CVINSERTF32x4()
{
	this->my_init();
}

CVINSERTF32x4::~CVINSERTF32x4()
{

}
