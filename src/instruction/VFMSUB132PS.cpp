#include "VFMSUB132PS.h"
int CVFMSUB132PS::my_init(void *p)
{
	this->name = "CVFMSUB132PS";
	this->alias = "VFMSUB132PS";
	return 0;
}

CVFMSUB132PS::CVFMSUB132PS()
{
	this->my_init();
}

CVFMSUB132PS::~CVFMSUB132PS()
{

}
