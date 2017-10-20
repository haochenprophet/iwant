#include "VRSQRT28PD.h"
int CVRSQRT28PD::my_init(void *p)
{
	this->name = "CVRSQRT28PD";
	this->alias = "VRSQRT28PD";
	return 0;
}

CVRSQRT28PD::CVRSQRT28PD()
{
	this->my_init();
}

CVRSQRT28PD::~CVRSQRT28PD()
{

}
