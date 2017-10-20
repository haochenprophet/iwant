#include "VFMADD132PS.h"
int CVFMADD132PS::my_init(void *p)
{
	this->name = "CVFMADD132PS";
	this->alias = "VFMADD132PS";
	return 0;
}

CVFMADD132PS::CVFMADD132PS()
{
	this->my_init();
}

CVFMADD132PS::~CVFMADD132PS()
{

}
