#include "FSQRT.h"
int CFSQRT::my_init(void *p)
{
	this->name = "CFSQRT";
	this->alias = "FSQRT";
	return 0;
}

CFSQRT::CFSQRT()
{
	this->my_init();
}

CFSQRT::~CFSQRT()
{

}
