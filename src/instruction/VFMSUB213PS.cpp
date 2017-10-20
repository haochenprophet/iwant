#include "VFMSUB213PS.h"
int CVFMSUB213PS::my_init(void *p)
{
	this->name = "CVFMSUB213PS";
	this->alias = "VFMSUB213PS";
	return 0;
}

CVFMSUB213PS::CVFMSUB213PS()
{
	this->my_init();
}

CVFMSUB213PS::~CVFMSUB213PS()
{

}
