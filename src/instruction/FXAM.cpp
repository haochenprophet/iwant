#include "FXAM.h"
int CFXAM::my_init(void *p)
{
	this->name = "CFXAM";
	this->alias = "FXAM";
	return 0;
}

CFXAM::CFXAM()
{
	this->my_init();
}

CFXAM::~CFXAM()
{

}
