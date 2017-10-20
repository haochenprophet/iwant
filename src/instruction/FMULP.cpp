#include "FMULP.h"
int CFMULP::my_init(void *p)
{
	this->name = "CFMULP";
	this->alias = "FMULP";
	return 0;
}

CFMULP::CFMULP()
{
	this->my_init();
}

CFMULP::~CFMULP()
{

}
