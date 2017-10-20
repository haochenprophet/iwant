#include "VINSERTF32x8.h"
int CVINSERTF32x8::my_init(void *p)
{
	this->name = "CVINSERTF32x8";
	this->alias = "VINSERTF32x8";
	return 0;
}

CVINSERTF32x8::CVINSERTF32x8()
{
	this->my_init();
}

CVINSERTF32x8::~CVINSERTF32x8()
{

}
