#include "VEXTRACTF128.h"
int CVEXTRACTF128::my_init(void *p)
{
	this->name = "CVEXTRACTF128";
	this->alias = "VEXTRACTF128";
	return 0;
}

CVEXTRACTF128::CVEXTRACTF128()
{
	this->my_init();
}

CVEXTRACTF128::~CVEXTRACTF128()
{

}
