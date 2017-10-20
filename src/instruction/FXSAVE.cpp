#include "FXSAVE.h"
int CFXSAVE::my_init(void *p)
{
	this->name = "CFXSAVE";
	this->alias = "FXSAVE";
	return 0;
}

CFXSAVE::CFXSAVE()
{
	this->my_init();
}

CFXSAVE::~CFXSAVE()
{

}
