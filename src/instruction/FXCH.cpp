#include "FXCH.h"
int CFXCH::my_init(void *p)
{
	this->name = "CFXCH";
	this->alias = "FXCH";
	return 0;
}

CFXCH::CFXCH()
{
	this->my_init();
}

CFXCH::~CFXCH()
{

}
