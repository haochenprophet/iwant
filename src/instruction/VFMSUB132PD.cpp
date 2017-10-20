#include "VFMSUB132PD.h"
int CVFMSUB132PD::my_init(void *p)
{
	this->name = "CVFMSUB132PD";
	this->alias = "VFMSUB132PD";
	return 0;
}

CVFMSUB132PD::CVFMSUB132PD()
{
	this->my_init();
}

CVFMSUB132PD::~CVFMSUB132PD()
{

}
