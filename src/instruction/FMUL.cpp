#include "FMUL.h"
int CFMUL::my_init(void *p)
{
	this->name = "CFMUL";
	this->alias = "FMUL";
	return 0;
}

CFMUL::CFMUL()
{
	this->my_init();
}

CFMUL::~CFMUL()
{

}
