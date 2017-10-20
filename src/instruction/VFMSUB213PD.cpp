#include "VFMSUB213PD.h"
int CVFMSUB213PD::my_init(void *p)
{
	this->name = "CVFMSUB213PD";
	this->alias = "VFMSUB213PD";
	return 0;
}

CVFMSUB213PD::CVFMSUB213PD()
{
	this->my_init();
}

CVFMSUB213PD::~CVFMSUB213PD()
{

}
