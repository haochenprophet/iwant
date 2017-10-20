#include "VFMADD213PS.h"
int CVFMADD213PS::my_init(void *p)
{
	this->name = "CVFMADD213PS";
	this->alias = "VFMADD213PS";
	return 0;
}

CVFMADD213PS::CVFMADD213PS()
{
	this->my_init();
}

CVFMADD213PS::~CVFMADD213PS()
{

}
