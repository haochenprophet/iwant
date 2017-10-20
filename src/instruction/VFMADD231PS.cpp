#include "VFMADD231PS.h"
int CVFMADD231PS::my_init(void *p)
{
	this->name = "CVFMADD231PS";
	this->alias = "VFMADD231PS";
	return 0;
}

CVFMADD231PS::CVFMADD231PS()
{
	this->my_init();
}

CVFMADD231PS::~CVFMADD231PS()
{

}
