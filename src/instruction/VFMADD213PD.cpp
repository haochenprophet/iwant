#include "VFMADD213PD.h"
int CVFMADD213PD::my_init(void *p)
{
	this->name = "CVFMADD213PD";
	this->alias = "VFMADD213PD";
	return 0;
}

CVFMADD213PD::CVFMADD213PD()
{
	this->my_init();
}

CVFMADD213PD::~CVFMADD213PD()
{

}
