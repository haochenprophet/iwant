#include "VRSQRT14PD.h"
int CVRSQRT14PD::my_init(void *p)
{
	this->name = "CVRSQRT14PD";
	this->alias = "VRSQRT14PD";
	return 0;
}

CVRSQRT14PD::CVRSQRT14PD()
{
	this->my_init();
}

CVRSQRT14PD::~CVRSQRT14PD()
{

}
