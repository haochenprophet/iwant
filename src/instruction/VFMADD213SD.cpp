#include "VFMADD213SD.h"
int CVFMADD213SD::my_init(void *p)
{
	this->name = "CVFMADD213SD";
	this->alias = "VFMADD213SD";
	return 0;
}

CVFMADD213SD::CVFMADD213SD()
{
	this->my_init();
}

CVFMADD213SD::~CVFMADD213SD()
{

}
