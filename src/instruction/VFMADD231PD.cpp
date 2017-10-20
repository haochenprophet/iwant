#include "VFMADD231PD.h"
int CVFMADD231PD::my_init(void *p)
{
	this->name = "CVFMADD231PD";
	this->alias = "VFMADD231PD";
	return 0;
}

CVFMADD231PD::CVFMADD231PD()
{
	this->my_init();
}

CVFMADD231PD::~CVFMADD231PD()
{

}
