#include "VFMADD213SS.h"
int CVFMADD213SS::my_init(void *p)
{
	this->name = "CVFMADD213SS";
	this->alias = "VFMADD213SS";
	return 0;
}

CVFMADD213SS::CVFMADD213SS()
{
	this->my_init();
}

CVFMADD213SS::~CVFMADD213SS()
{

}
