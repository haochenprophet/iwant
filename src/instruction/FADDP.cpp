#include "FADDP.h"
int CFADDP::my_init(void *p)
{
	this->name = "CFADDP";
	this->alias = "FADDP";
	return 0;
}

CFADDP::CFADDP()
{
	this->my_init();
}

CFADDP::~CFADDP()
{

}
