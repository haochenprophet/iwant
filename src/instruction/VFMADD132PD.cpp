#include "VFMADD132PD.h"
int CVFMADD132PD::my_init(void *p)
{
	this->name = "CVFMADD132PD";
	this->alias = "VFMADD132PD";
	return 0;
}

CVFMADD132PD::CVFMADD132PD()
{
	this->my_init();
}

CVFMADD132PD::~CVFMADD132PD()
{

}
